def main(n,m):
    for i in range(1,n+1):
        if i%4==2:
            for i in range(1,m): # case for handling ........#
                # print(i,end="")
                print(".",end="")
            print("#",end="")
            # print("outer")
        elif i%4==0:
            # print("inner")
            print("#",end="")
            for i in range(1,m):# case for handling #........ at every 4th columns
                # print(i,end="")
                print(".",end="")
        # till now we are covering all conditions of dots with 'm' how so ever comes in different forms
        else:
            for i in range(1,m+1):
                # print(i,end="")
                print("#",end="")
        print("\r")
            
                
    




if __name__ == '__main__':
    n,m=list(map(int,input().split()))

        
    main(n,m)
        
