def fun(n):
	array = []
	n = int(input())
	c = 0
	for i in range (0,n):
		array[i] = int(input())

	for j in range (0,n):
		for k in range (0,n):
			if (array[j] == array[k]):
				c = c + 1
				print(c)

#MoreLibraryFunctions/NumberSequence1.kt
import atomictest.eq

fun main(args: Array<String>) {
  val naturalNumbers =
    generateSequence(1) { it + 1 }
  naturalNumbers.take(3).toList() eq
    listOf(1, 2, 3)
  naturalNumbers.take(10).sum() eq 55
}

 #codechef oct phone price
 # cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    p=list(map(int,input().split()))
    flag=1
    minn=p[0]
    for i in range(1,5):
        if p[i]<minn:
            minn=p[i]
            flag+=1
    if n>5:
        for i in range(5,n):
            arr=[p[i-5],p[i-4],p[i-3],p[i-2],p[i-1]]
            if min(arr)>p[i]:
                flag+=1
    print(flag)




import math
def func1(n):
    list=[]
    # n=int(input())
    for i in range(0,n):
        values=int(input())
        list.append(values)
    print(pow(2,n))
func1(2)
#BROKEN KEYBOARD CODECHEF
t=int(input())
while(t>0):
    t=t-1
    s=str(input())
    pos=0
    # b=[]
    b=str
    if():
        for i in s:
            pos=pos+1
            if(s[:pos] != s[:pos+1]):
                # b.append(s[:pos])
                # b.append(s[:pos+1])
                b=s[:pos]+s[:pos+1]
            else:
                continue
    # for i in range(len(b)):
    #     print(b[i])
    print(b)