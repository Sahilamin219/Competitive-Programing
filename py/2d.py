# the first line of input is the number of rows of the array
n = int(input()) 
a = []
for i in range(n):
    a.append([int(j) for j in input().split()])

# the first line of input is the number of rows of the array
n = int(input()) 
a = []
for i in range(n):
    row = input().split()
    for i in range(len(row)):
        row[i] = int(row[i])
    a.append(row)


# the first line of input is the number of rows of the array
n = int(input()) 
a = [[int(j) for j in input().split()] for i in range(n)]


n = 4
a = [[0] * n for i in range(n)]
for i in range(n):
    for j in range(n):
        if i < j:
            a[i][j] = 0
        elif i > j:
            a[i][j] = 2
        else:
            a[i][j] = 1
for row in a:
    print(' '.join([str(elem) for elem in row]))