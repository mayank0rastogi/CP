#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

int population_size,ver,nodes,graph[50][50],count=1,map[100],chromo[50],edges,nodes,generations;


struct CHROMOSOME
{
    int gnome[50];
    int fitness;
};

int optimal_answer=1e9;
int optimal_path[50];
int chromosome[50];

#ifndef ONLINE_JUDGE
#define freopen freopen("Input2.txt","r",stdin);freopen("Output.txt","w",stdout);
#else
#define freopen //comment
#endif


void swap(int*a,int*b){int sw=*a;*a=*b;*b=sw;}

int Generate_Random_Number(int start,int end)
{
    return start + (rand() % (end - start));
}

void update_optimal_answer(int update,int ch[])
{
    if(update<optimal_answer)
    {
        optimal_answer=update;
        for(int i=0;i<=nodes;i++)optimal_path[i]=ch[i];
    }
}

void generate_chromosome()
{
    chromosome[0]=1;
    for(int i = 0; i<=nodes; i++)map[i]=0;
    count = 1;
    while(count!=nodes)
    {
        int temp = Generate_Random_Number(2,nodes+1);
        if(map[temp]==0)
        {
            map[temp]++;
            chromosome[count]=temp;
            count++;
        }
    }
    chromosome[nodes]=chromosome[0];
    for(int i=0;i<=nodes;i++)chromo[i]=chromosome[i];
}


int Chromosome_Fitness(int chromosome_array[])
{
    int chromo_fitness = 0,i=0,index1,index2;
    int stop=nodes-1;
    while(stop>=0)
    {
        index1=chromosome_array[i];
        index2=chromosome_array[i+1];
        chromo_fitness+=graph[index1][index2];
        stop--;
        i++;
    }
    return chromo_fitness;
}

void mutate_chromosome(int gnome[])
{
    while(1)
    {
        int r = Generate_Random_Number(1,nodes);
        int r1 = Generate_Random_Number(1,nodes);
        if(r!=r1 ) {swap(&gnome[r],&gnome[r1]);break;}
    }
    for(int i=0;i<=nodes;i++)chromo[i]=gnome[i];
}


void Find_Shortest_Route()
{
    int fl=0;
    struct CHROMOSOME population[population_size+1];
    struct CHROMOSOME temp;


    for(int i = 0; i<population_size; i++)
    {
        generate_chromosome();
        for(int j=0;j<=nodes;j++) temp.gnome[j]=chromo[j];
        temp.fitness = Chromosome_Fitness(temp.gnome);
        update_optimal_answer(temp.fitness,temp.gnome);
        population[i] = temp;
    }


    /*printf("Initial \tChromosome\nPopulation   FITNESS VALUE\n");
    for(int i = 0; i<population_size; i++)
    {
        for(int j=0;j<nodes;j++)
        {
         printf("%d ",population[i].gnome[j]);
        }
        printf(" ->         %d\n",population[i].fitness);
    }*/

    int initial_generation=generations+1;

    while (generations>0)
        {
        struct CHROMOSOME new_population[population_size+1];
        int index=0;
        for (int i = 0; i < population_size; i++)
            {
            struct CHROMOSOME p1 = population[i];
            int ok=1;
            while(ok)
                {
                mutate_chromosome(p1.gnome);
                struct CHROMOSOME new_gnome;
                for(int k=0;k<=nodes;k++)new_gnome.gnome[k]=chromo[k];
                new_gnome.fitness = Chromosome_Fitness(new_gnome.gnome);
                update_optimal_answer(new_gnome.fitness,new_gnome.gnome);

                if (new_gnome.fitness <= population[i].fitness)
                {
                    new_population[index]=(new_gnome);
                    index++;
                    ok=0;
                }
                else
                {
                    float base = 2.7;
                    float percentage_fitness_change=(float)(new_gnome.fitness - population[i].fitness) / 100;
                    float prob=pow(base,percentage_fitness_change);
                    prob=1/prob;
                    float threshold=0.5;
                    if (prob > threshold)
                    {
                        new_population[index]=(new_gnome);
                        index++;
                        ok=0;
                    }
                }
            }
        }
        for(int s=0;s<population_size;s++)
        {
            population[s].fitness=new_population[s].fitness;
            for(int g=0;g<=nodes;g++)
            {
                population[s].gnome[g]=new_population[s].gnome[g];
            }
        }

        /*printf("AFTER MUTATION\n");
        printf("generation %d\n",initial_generation-generations);
        printf("GNOME     FITNESS VALUE \n");
        for(int i=0;i<population_size;i++)
        {
            for(int j=0;j<=nodes;j++)
            {
                printf("%d ",population[i].gnome[j]);
            }
            printf("\t\t");
            printf("%d\n",population[i].fitness);
        }*/
        generations--;
    }
}


int main()
{
    freopen
    scanf("%d%d",&nodes,&edges);
    int a,b,d;
    for(int x=1; x<=edges; x++)
    {
      scanf("%d%d%d",&a,&b,&d);
      graph[a][b]=d;
      graph[b][a]=d;
    }
    scanf("%d",&population_size);
    scanf("%d",&generations);
    time_t start,end;
    start=clock();
    Find_Shortest_Route();
    end=clock();
    double num=end-start;
    double den=CLOCKS_PER_SEC;
    double time=num/den;
    printf("Minimized cost of the path=%d units\n",optimal_answer);
    printf("\nShortest Route : ");
    for(int i=0;i<=nodes;i++)printf("%d ",optimal_path[i]);
    printf("\nTime=%f Milliseconds",time);
    return 0;
}