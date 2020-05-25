import sys 
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
import re 
import math
gg="abcdefghijklmnopqrstuvwxyz"
n=int(input())
l=list(map(int,input().split()))
for i in range(n):
	visited=[0 for i in range(n)]
	visited[i]+=1
	k=i
	while(1):
		visited[l[k]-1]+=1
		if(visited[l[k]-1]>1):
			print(l[k],end=" ")
			break
		k=l[k]-1
		# print(visited)