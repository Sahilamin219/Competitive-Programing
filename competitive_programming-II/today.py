import sys 
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
import re 
import math
gg="abcdefghijklmnopqrstuvwxyz"
t=int(input())
while(t):
	t-=1
	n=int(input())
	m=n
	l=list(map(int,input().split()))
	l.sort()
	i=0
	ans=0
	if(l[0]==l[n-1]):
		print(n//l[0])
	else:
		while(n>0 and i<m):
			j=0
			if(l[i]==1):
				n-=l[i]
			else:
				maxi=l[i]
				k=l[i]
				while(j<k):
					if(i+j<m and l[i+j]>maxi):
						maxi=l[i+j]
						k=l[i+j]
					j+=1
				n-=maxi
			if(i+j<m):
				i+=l[j]
			if(n>=0):
				ans+=1
		print(ans)