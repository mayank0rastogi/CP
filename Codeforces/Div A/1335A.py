def main(n):
    if n%2==0:
        
        n=n//2
        n=n-1
    
    else:
        n=n//2
    print(n)
        
    




if __name__ == '__main__':
    t=int(input())
    while t:
    
        n = int(input())
        
        main(n)
        t=t-1
