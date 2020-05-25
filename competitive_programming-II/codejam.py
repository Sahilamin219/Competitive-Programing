import sys 
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
t=int(input())
c=0
while(t):
    t-=1
    c+=1
    x,y=map(int,input().split())
    flag=1
    ans=""
    if(x==-2 and y==2):
        ans="ENW"
        flag=0
    elif(x==2 and y==-2):
        ans="NES"
        flag=0
    elif(x==-2 and y==-2):
        ans="NWS"
        flag=0
    elif(x==2 and y==2):
        ans="WNE"
        flag=0
    elif(x==y):
        flag=1
    elif(x==-y):
        flag=1
    else:
        flag=0
        if(x==2 and y==3):
            ans="SEN"
        elif(x==-2 and y==-3):
            ans="NWS"
        elif(x==2 and y==-3):
            ans="NES"
        elif(x==-2 and y==3):
            ans="SWN"
        elif(x==-3 and y==-2):
        	ans="ESW"
        elif(x==-3 and y==2):
        	ans="ENW"
        elif(x==3 and y==2):
        	ans="WNE"
        elif(x==3 and y==-2):
        	ans="WSE"
        elif(x==-2 and y==1):
        	ans="NW"
        elif(x==-2 and y==-1):
        	ans="SW"
        elif(x==2 and y==1):
        	ans="NE"
        elif(x==2 and y==-1):
        	ans="SE"
        elif(x==1 and y==2):
        	ans="EN"
        elif(x==1 and y==-2):
        	ans="ES"
        elif(x==-1 and y==2):
        	ans="WN"
        elif(x==-1 and y==-2):
        	ans="WS"
        elif(x==3 and y==4):
        	ans="EEN"
        elif(x==3 and y==-4):
        	ans="EES"
        elif(x==4 and y==3):
        	ans="NNE"
        elif(x==-4 and y==3):
        	ans="NNW"
        elif(x==-3 and y==4):
        	ans="WWN"
        elif(x==-3 and y==-4):
        	ans="WWS"
        elif(x==4 and y==-3):
        	ans="SSE"
        elif(x==-4 and y==-3):
        	ans="SSW"
        elif(((x==3 or x==-3) and (y==1 or y==-1)) or ((x==1 or x==-1) and (y==3 or y==-3))):
            flag=1
        elif(((x==4 or x==-4) and y==0) or (x==0 and (y==4 or y==-4))):
            flag=1
        elif(((x==4 or x==-4) and (y==1 or y==-1)) or ((x==1 or x==-1) and (y==4 or y==-4))):
            flag=1
        elif(((x==4 or x==-4) and (y==2 or y==-2)) or ((x==2 or x==-2) and (y==4 or y==-4))):
            flag=1
        else:
	        if(x==2 or x==1 or x==4):
	            ans+="E"
	        elif(x==-2 or x==-1 or x==-4):
	            ans+="W"
	        elif(x==3):
	            ans+="EE"
	        elif(x==-3):
	            ans+="WW"
	        if(y==2 or y==1 or y==4):
	            ans+="N"
	        elif(y==-2 or y==-1 or y==-4):
	            ans+="S"
	        elif(y==3):
	            ans+="NN"
	        elif(y==-3):
	            ans+="SS"
    if(flag):
        print("Case #",end="")
        print(c,end="")
        print(": ",end="")
        print("IMPOSSIBLE")
    else:
        print("Case #",end="")
        print(c,end="")
        print(": ",end="")
        print(ans)