import sys 
sys.stdin = open('input2.txt', 'r') 
sys.stdout = open('output2.txt', 'w') 
t=int(input())
while(t>0):
	t-=1
	n,k=map(int,input().split())
	s=str(input())
	m=len(s)
	count1=1
	count2=1
	a=[]
	count_a=0
	for i in range (0,n//k):
		temp2=0
		for p in range (1,k+1):
			temp1=0
			for j in range (0,n):
				if(s[p+(i*k)-1]==s[j]):
					temp1+=1
				# if(s[i+k-1]==s[j]):
				# 	temp2+=1
				j+=k
			i+=k
			temp2+=temp1
		if(count2<temp2):
			count2=temp2

	ans=(n-count2)
	print(ans)
	# i, k−i+1, k+i, 2k−i+1, 2k+i, 3k−i+1, …
#int ko string mai print karne sai age k extra bekar 0 bhi print ho zate hai