# Using above first method to create a 
# 2D array 
rows, cols = (5, 5) 
arr = [[0]*cols]*rows 
print(arr) 

# Using above second method to create a 
# 2D array 
rows, cols = (5, 5) 
arr = [[0 for i in range(cols)] for j in range(rows)] 
print(arr) 

Both the ways give seemingly same output as of now. Lets change one of the elements in the array of method 2a and method 2b.
# Python 3 program to demonstrate working 
# of method 1 and method 2. 

rows, cols = (5, 5) 

# method 2a 
arr = [[0]*cols]*rows 

# lets change the first element of the 
# first row to 1 and print the array 
arr[0][0] = 1

for row in arr: 
	print(row) 
# outputs the following 
#[1, 0, 0, 0, 0] 
#[1, 0, 0, 0, 0] 
#[1, 0, 0, 0, 0] 
#[1, 0, 0, 0, 0] 
#[1, 0, 0, 0, 0] 

# method 2b 
arr = [[0 for i in range(cols)] for j in range(rows)] 

# again in this new array lets change 
# the first element of the first row 
# to 1 and print the array 
arr[0][0] = 1
for row in arr: 
	print(row) 

# outputs the following as expected 
#[1, 0, 0, 0, 0] 
#[0, 0, 0, 0, 0] 
#[0, 0, 0, 0, 0] 
#[0, 0, 0, 0, 0] 
#[0, 0, 0, 0, 0] 

We expect only the first element of first row to change to 1 but the first element of every row gets changed to 1 in method 2a. This peculiar functioning is because Python uses shallow lists which we will try to understand.

In method 1a, Python doesn’t create 5 integer objects but creates only one integer object and all the indices of the array arr point to the same int object as shown.

1d shallow array representation

If we assign the 0th index to a another integer say 1, then a new integer object is created with the value of 1 and then the 0th index now points to this new int object as shown below

1d shallow array changed value

Similarly, when we create a 2d array as “arr = [[0]*cols]*rows” we are essentially the extending the above analogy.
1. Only one integer object is created.
2. A single 1d list is created and all its indices point to the same int object in point 1.
3. Now, arr[0], arr[1], arr[2] …. arr[n-1] all point to the same list object above in point 2.

The above setup can be visualized in the image below.

2d shallow array representation

Now lets change the first element in first row of “arr” as
arr[0][0] = 1

=> arr[0] points to the single list object we created we above.(Remember arr[1], arr[2] …arr[n-1] all point to the same list object too)
=> The assignment of arr[0][0] will create a new int object with the value 1 and arr[0][0] will now point to this new int object.(and so will arr[1][0], arr[2][0] …arr[n-1][0])

This can be clearly seen in the below image.

2d shallow array changed

So when 2d arrays are created like this, changing values at a certain row will effect all the rows since there is essentially only one integer object and only one list object being referenced by the all the rows of the array.

