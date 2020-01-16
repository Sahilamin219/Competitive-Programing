class Binary_frecNodc:
	def __init__(self, data):
		#root node
		self.data = data
		self.left = None#left child
		self.right = None#right child
	def setData(sclf, data):
		self.data = data
	#get data
	def getData(self):
		return self.data
	#get left child of a node
	def getLeft(sclf):
		return self.left
	#get right child of a node
	def getRight(self):
		return self.right

def function():
	n=int(input())
	array=[n]
	r=0
	b=1
	count=0
	k=1
	ans=0
	for i in range (0,n):
		for j in range (0,n):
			if k==1:				
				array[i]=0
				array[j]=1
				ans=ans+2*count
			else:
				array[i]=1
				array[j]=1
	return ans