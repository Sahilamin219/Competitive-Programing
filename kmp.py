import sys
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
txt="onionionspl"
pat="onions"
# Knuth Moris Parth
def computeLPSarray(LPS, pat, m):
	length=0;
	i=1;
	LPS[0]=0
	while(i<m):
		if(pat[length]==pat[i]):
			length+=1;
			i+=1;
			LPS[i]=length#this will below increament of length
		else:
			if(length==0):
				LPS[i]=0
				i+=1
			else:
				length=LPS[length-1]
def KMPsearch(txt, pat):
	n=len(txt)
	m=len(pat)
	LPS=[0]*m
	computeLPSarray(LPS, pat, m)
	i=0;j=0;
	print(LPS)
	while(i<n):
		if(txt[i]==pat[j]):
			i+=1;j+=1;
		else:
			if(j>0):
				j=LPS[j-1]
				i+=1
			else:
				i+=1
		if(j==m):
			print(i-j)
KMPsearch(txt,pat)