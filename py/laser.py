"""class Bunch:
    def __init__(self, **kwds):
        self.__dict__.update(kwds)
"""
# cook your dish here
def __init__(self,x,your):
    self.x = x
    self.y = y
    
    """# List initialization 
    list1 =[10, 20, 30, 40] 
    list2 =[40, 50, 60] 
    # using list comprehension 
    output = [[a, b] for a in list1  
              for b in list2 if a != b]
    # printing output 
    print(output[2]) """
    
t=int(input())#.split())
while(t>0):
    t-=1
    n,q=map(int,input().split())
    list1=list(map(int,input().split()))
    list2[]
    for i in range (0,n):
        list2[i]=i
    # my_dic={}
    # for i,j in zip(list1,list2):
    #     my_dic.append
    # list3 = [[a, b] for a in list1  
            #   for b in list2 if a != b]
    while(q>0):
        q-=1
        x1,x2,y=map(int,input().split())
            
        
"""
    Inserting into a Tree

To insert into a tree we use the same node class created above and add a insert class to it. The insert class compares the value of the node to the parent node and decides to add it as a left node or a right node. Finally the PrintTree class is used to print the tree.

class Node:

    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
# Compare the new value with the parent node
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

# Print the tree
    def PrintTree(self):
        if self.left:
            self.left.PrintTree()
        print( self.data),
        if self.right:
            self.right.PrintTree()

# Use the insert method to add nodes
root = Node(12)
root.insert(6)
root.insert(14)
root.insert(3)

root.PrintTree()

When the above code is executed, it produces the following result −

3 6 12 14

Traversing a Tree

The tree can be traversed by deciding on a sequence to visit each node. As we can clearly see we can start at a node then visit the left sub-tree first and right sub-tree next. Or we can also visit the right sub-tree first and left sub-tree next. Accordingly there are different names for these tree traversal methods. We study them in detail in the chapter implementing the tree traversal algorithms here. Tree Traversal Algorithm
"""
