import sys 
sys.stdin = open('input2.txt', 'r') 
sys.stdout = open('output2.txt', 'w') 
def negmod(a, m): 
    return (a%m + m) % m 
t=int(input())
mod=int(10e9+7)
while(t):
	t-=1
	n=int(input())
	l=list(map(int,input().split()))
	ans=0
	l.sort(reverse=True)
	d=0
	for j in range(0,n):
		if(l[j]>=d):
			l[j]-=d
			d+=1
		else:
		    l[j]=0
		    d+=1
	for i in range (0,n):
		ans+=l[i]
		# ans=((ans%mod)+((l[i])%mod))%mod
		# ans=(ans%mod)
	# flag=1
	# for i in range (0,len(l)):
	# 	if(l[i]==1):
	# 		f=0
	# 		for j in range(i+1,len(l)):
	# 			if(l[j]==1 and j-i<6):
	# 				print("NO")
	# 				f=1
	# 				flag=0
	# 				break
	# 		if(f):
	# 			break
	# if(flag):
	# 	print("YES")
		# for x in xrange(1,10):
		# 	pass

# globali=[0,1,2,3,4,5,6,7,8,9]
# def check(lis,newlis):
#     a_count=[0,0,0,0,0,0,0,0,0,0]
#     b_count=[0,0,0,0,0,0,0,0,0,0]
#     for i in lis:
#         a_count[i]+=1
#     for i in newlis:
#         b_count[i]+=1
#     if(a_count==b_count):
#         return 1
#     else:
#         return 0
# t=int(input())
# while(t):
#     t-=1
#     n=int(input())
#     count_even=0
#     m=n
#     lis=[]
#     flag=1
#     while(m):
#         r=(m%10)
#         lis.append(r)
#         if(r%2==1 and m//10>10 and flag==1):
#         	mm=m
#         	while(mm):
#         		rr=mm%10
#         		mm=mm//10
#         		if(rr%2==0):
#         			flag=0
#         			break
#         if(r%2==0):
#             count_even+=1
#         m=(m//10)
#     # print(lis,count_even,end=" ")
#     if(count_even==0):
#         print(-1)
#     elif(len(set(lis))==1):
#         print(-1)
#     elif(flag==1):
#     	print(-1)
#     else:
#         while(1):
#             newlis=[]
#             if(n%2==0):
#                 n+=2
#                 m=n
#                 while(m):
#                     r=(m%10)
#                     newlis.append(r)
#                     m=(m//10)
#                 if(check(lis,newlis)):
#                     break
#             else:
#                 n+=1
#                 n+=2
#                 m=n
#                 while(m):
#                     r=(m%10)
#                     newlis.append(r)
#                     m=(m//10)
#                 if(check(lis,newlis)):
#                     break
#         print(n)

# stdin = input()
# n,m,t = stdin.split()
# n = int(n)
# m = int(m)
# t = int(t)
# n,m,t=map(int,input().split())
# def factorial(n):
# 	if(n<=1):
# 		return 1
# 	else:
# 		return n*(factorial(n-1))

# def ncr(n,r):
# 	return factorial(n)//factorial(r)//factorial(n-r)
# total=0
# # n, m, t (4 ≤ n ≤ 30, 1 ≤ m ≤ 30, 5 ≤ t ≤ n + m).
# for i in range (4,n+1):
# 	if(t-i>0):
# 	 	total += ncr(n,i)*ncr(m,t-i)
# print(total)

# t=int(input())
# while(t):
# 	t-=1
# 	n=int(input())
# 	flag=1
# 	m=0
# 	while(flag):
# 		n+=1;
# 		chk=1
# 		i=0
# 		l=[]
# 		m=n
# 		while(n):
# 			l.append(n%10)
# 			n=(n//10)
# 			i+=1
# 		n=m
# 		# print(l,i)
# 		l.reverse()
# 		# print(l)
# 		for x in range(0,i//2):
# 			if(l[x]==l[i-x-1]):
# 				# pass
# 				# print(l[x],l[i-x-1])
# 				continue
# 			else:
# 				# print(l[x],l[i-x-1])
# 				chk=0
# 				# break
# 		if(chk):
# 			flag=0
# 			break
# 	print(m)
