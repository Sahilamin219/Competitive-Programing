#given i,Fi,j,Fj,n(synatax:Fi1 = Fi+1)
def f(k):
	a =0
	b =1
	if k == 0:
		return 0
	if k == 1:
		return 1
	for i in range(2,k+1):
		c=a+b
		a=b
		b=c
	return c
def determineFn(i,Fi,j,Fj,n):
	if n == i:
		global Fn
		Fn=Fi
	if i<n:
		# mycode
		# if i<j:
		# 	Fi1 = (Fj-f(j-i-1)*Fi)/f(j-1)
		# 	n=n-1
		# 	while(i != n):
		# 		i=i+1
		# 		Fi=Fi1
		# 		Fi1=Fn
		# 		Fn = Fi+Fi1
		# gfgcode
		if i>j:
			a,b=0,0
			Fi1=None
			# global Fn
			b = Fi
			# Fi1 = Fn
			Fn = Fi1
			n = n - 1
			while n != i: 
				n = n - 1
				a = b 
				b = Fn 
				Fn = a + b
	if i>n:
		# mycode
		# if i>j:
		# 	i,j=j,i
		# 	Fi,Fj=Fj,Fi
		# 	Fi1 = (Fj-f(j-i-1)*Fi)/f(j-1)
		# 	Fn=f(n-i-1)*Fi1+f(n-i-2)*Fi
		# gfgcode
		if i<j:
			Fi1 = (Fj-f(j-i-1)*Fi)/f(j-1)
			a = Fi 
			b = Fi1 
			while n != i: 
				n = n + 1
				Fn = b - a 
				b = a 
				a = Fn 
	return Fn
if __name__ == '__main__':
	i=3
	Fi=5
	j=-1
	Fj=4
	n=5
	print(determineFn(i,Fi,j,Fj,n))


def uniquestring(n):
	array = []
	for i in range(0, n):
		array[i] = int(input())
#take input as variable = slpit.input() so because inputs are usally given with spaces in between them
		"""x = int(input())
	    array.append(x)
	    array.insert(i,x)...is also not a better way"""
	if i<n:
		i=i+1
		j=0
		for j in range(j,n):
			if array[i] == array[j]:
				print("string is not unique\n")
			if array[i] != array[j]:
				j=j+1
uniquestring(5)