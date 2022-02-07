def solve(a,l):
   match=0
   for i in l:
    #   print(i)
      for j in a:
       
         if i==j:
        #  print(a[i])
            match=match+int(a[j])
         else:
            continue
   return match
#   print(match)  
    





    
    
    
    
if __name__ == '__main__':
   a=dict()
   a={"Tetrahedron":4,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20}
   n=int(input())
   l=list()
   while n:
       st=str(input())
    #   print("we are getting value ")
       
       l.append(st)
    #   print("appending value ")
       n=n-1
#   for i in range(0,len(l)):
#         print(i)
#         print(l[i])
#         print(a[i))
   print(solve(a,l))
     



     
    
