# import pygame
# pygame.init()
# gameDisplay = pygame.display.set_mode((700,700))
# pygame.display.set_caption('slither')
# img = pygame.image.load('snake.png').convert_alpha()
# img = pygame.transform.scale(img, (300, 300)).convert_alpha()
# #directions = ('left','right')
# direction = 'right'
# run = True
# while run:
# 	for event in pygame.event.get():
# 		pygame.init()
# 		if event.type == pygame.QUIT:
# 			run = False
# 		if event.type == pygame.KEYDOWN:
# 			if event.key  == pygame.K_LEFT:
# 				direction = 'left'
# 				print('left')
# 			elif event.key == pygame.K_RIGHT:
# 				direction = 'right'
# 				print('right')
# 	#for direction in directions:				
# 	if direction == 'right':
# 		img = pygame.transform.rotate(img, 270)
# 		print('270')
# 	if direction == 'left':
# 		img = pygame.transform.rotate(img, 90)
# 		print('90')	
# 	gameDisplay.blit(img,(300,300))
# 	pygame.display.update()
# 	pygame.display.flip()



	
# import pygame
# import time
# import sys
# import random
# pygame.init()
# font = pygame.font.SysFont(None,35)
# clock = pygame.time.Clock()
# global block_Size
# block_size = 10
# def appleGen():
# 	randappleX = round(random.randrange(0,700 - block_size))#/10.0)*10.0
# 	randappleY = round(random.randrange(0,700 - block_size))#/10.0)*10.0
# 	return 	randappleX,randappleY
# randappleY,randappleX = appleGen()
# gameDisplay = pygame.display.set_mode((700,700))
# pygame.display.set_caption('sahil_games')

# clock.tick(105)

# pygame.display.update()


# Binary Tree 
# class Node: 
#     def __init__(self,key): 
#         self.left = None
#         self.right = None
#         self.val = key 
  
  
# # create root 
# root = Node(1) 
# ''' following is the tree after above statement 
#         1 
#       /   \
#      None  None'''
  
# root.left      = Node(2); 
# root.right     = Node(3); 
    
# ''' 2 and 3 become left and right children of 1 
#            1 
#          /   \
#         2      3 
#      /    /  /  \
#    None None None None'''
  
  
# root.left.left  = Node(4); 
'''4 becomes left child of 2 
           1 
       /       \
      2          3 
    /   /     /  \
   4    None  None  None 
  /  \
None None'''
import bokeh
from bokeh.plotting import figure,output_file, show
output_file("test.html")
plot=figure()
plot.line([1,2,3,4,5],[6,7,2,4,5], line_width=2)
show(plot)

def tom():
	array = []
	x = int(input())
	for i in range(0,x):
		array[i] = str(input())
	for i in range(0,x):
		for j in range(0,x):
			if array[j] == array[i]:
				print("Yes")
			else:
				print("No")