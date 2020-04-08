# create a dictionary
squares = {1:1, 2:4, 3:9, 4:16, 5:25}  

# remove a particular item
# Output: 16
print(squares.pop(4))  

# Output: {1: 1, 2: 4, 3: 9, 5: 25}
print(squares)

# remove an arbitrary item
# Output: (1, 1)
print(squares.popitem())

# Output: {2: 4, 3: 9, 5: 25}
print(squares)

# delete a particular item
del squares[5]  

# Output: {2: 4, 3: 9}
print(squares)

# remove all items
squares.clear()

# Output: {}
print(squares)

# delete the dictionary itself
del squares

# Throws Error
# print(squares)
# Python3 code to demonstrate 
# Minimum index value 
# using min() + list comprehension + zip() 

# initializing list 
test_list = [[3, 7, 6], [1, 3, 5], [9, 3, 2]] 

# printing original list 
print("The original list : " + str(test_list)) 

# using min() + list comprehension + zip() 
# Minimum index value 
res = [min(idx) for idx in zip(*test_list)] 

# print result 
print("The Minimum of each index list is : " + str(res)) 
# Python3 code to demonstrate 
# Minimum index value 
# using min() + map() + zip() 

# initializing list 
test_list = [[3, 7, 6], [1, 3, 5], [9, 3, 2]] 

# printing original list 
print("The original list : " + str(test_list)) 

# using min() + map() + zip() 
# Minimum index value 
res = list(map(min, zip(*test_list))) 

# print result 
print("The Minimum of each index list is : " + str(res)) 
