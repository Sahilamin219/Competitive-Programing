import sys 
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
def solve(ans,l,d,n,x):
    re=0
    while(ans>0):
        start=ans
        for i in range(0,n):
            if(start>d):
                a[ans]=0
                re=0
                ans-=1
                # print("start: ",start)
                break
            if(start%l[i]==0):
                    re=1
            else:
                # print("start: ",start)
                r=l[i]-(start%l[i])
                rr=(start%l[i])
                start+=r
                if(start>d):
                    re=0
                    # print("start: ",start)
                    # if(ans%l[i]!=0):
                    #     a=ans//l[i]
                    #     if(a>0):
                    #         ans=(a)*l[i]
                    # else:
                    ans-=1
                    break
        if(re):
            break
    print("Case #",end="")
    print(x,end="")
    print(": ",end="")
    print(ans)
    return

t=int(input())
x=0
while(t):
    t-=1
    x+=1
    n,d=map(int,input().split())
    l=list(map(int,input().split()))
    ans=d
    lis=[]
    lis.append(l[0])
    for i in range(1,n):
        if(l[i-1]%l[i]==0):
            pass
        else:
            lis.append(l[i])
    n=len(lis)
    # l.sort(reverse=True)
    solve(ans,lis,d,n,x)