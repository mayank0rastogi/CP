from collections import defaultdict

class Graph:
    
    def __init__(self):
        #default dict to store the graph
      self.graph=defaultdict(list)
    
    def addEdge(self,u,v):
        self.graph[u].append(v)
    
    #mark all the vertices are not visited     
    def BFS(self,s):
        visited=[False]*(max(self.graph)+1)
        
    # creating a queue for a graph
        queue=[]
    #mark the source node as visited and enqueue it
        queue.append(s)
        visited[s]=True


        while queue:
          #dequeue a vertex  from queue and simply print it 
            s=queue.pop(0)
            # cout<<s<<" ";
            print(s,end=" ")
           
          
            for i in self.graph[s]: # Get all adjacent vertices of the
                if visited[i]==False:  # dequeued vertex s  If a adjacent has not been visited
                    queue.append(i)   # enqueue
                    visited[i]=True #mark it visited
            
g = Graph()#create object
g.addEdge(0, 1)#pushing 
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
 
print ("Following is Breadth First Traversal"
                  " (starting from vertex 2)")
g.BFS(2)#call the function to perform BFS
