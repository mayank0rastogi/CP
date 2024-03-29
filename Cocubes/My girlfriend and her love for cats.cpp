/*
Problem
Ashima has brought home n cats. Now, being a cat lover, she is taking care of the cats and has asked me to bring cat food for them. Being a guy with no idea what to buy, I brought some n packets of cat food (I atleast knew that each and every cat being a good junkie will completely eat a whole packet of cat food and won't share anything with other cats). Each food packet has some calorie value c. If a cat with original strength s eats that packet, the strength of the cat becomes c*s. Now, Ashima is angry at me that I did not know this fact and now all the cats won't be able to eat the maximum strength packet and increase their strength (and annoying powers).

To calm her mood, I need your help. I will provide you with the original strength of each cat and the calorie value of each of the n packets. Help me by telling me what is the maximum value of sum of the final strengths of the cats that can be obtained if each cat is given a whole packet of cat food to eat.

Input
The first line of the input will consist of n, the number of cats as well as the number of food packets brought by me.
The second line will consist of n space separated integers si, the original strength of the cats.
Third line consists of n space separated integers ci, the calorie value of food packets.

Output:
An integer which is the maximum value of sum of the final strengths of the cats that can be obtained.

Constraints:
1 ≤ n ≤ 106
1 ≤ si ≤ 106
1 ≤ ci ≤ 106

Sample Input
2
3 1
4 3
Sample Output
15
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
   long int n,i;
    cin>>n;
    long int s[n],c[n];

   for(i=0;i<n;i++)
   {
         cin>>s[i];
   }

    for(i=0;i<n;i++)
     {
       cin>>c[i];
     }
     sort(s,s+n);
     sort(c,c+n);
     long int sum=0;
     for(i=0;i<n;i++)
      {
         sum=sum+(s[i]*c[i]);
      }

    cout<<sum;

}
