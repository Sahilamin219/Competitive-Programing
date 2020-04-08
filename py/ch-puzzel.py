from collections import deque
can_swap = [(0,1),(1,2),(3,4),(4,5),(6,7),(7,8),(0,3),(1,4),(2,5),(3,6),(4,7),(5,8)]
primes = {3,5,7,11,13,17}
visted = {(1,2,3,4,5,6,7,8,9):0}
visting = deque()
visting.append((1,2,3,4,5,6,7,8,9))
step = 0
while len(visting) > 0 :
    for _ in range(len(visting)) :
        l = list(visting.popleft())
        for i, j in can_swap :
            if (l[i] + l[j]) in primes :
                l[j], l[i] = l[i], l[j]
                t = tuple(l)
                if t not in visted :
                    visted[t] = step + 1
                    visting.append(t)
                l[j], l[i] = l[i], l[j]
    step += 1
def shortest(l):
    t = tuple(l)
    return visted[t] if t in visted else -1
T = int(input())
for _ in range(T) :
    blank = input()
    l = []
    for __ in range(3) :
        for i in map(int, input().split()) :
            l.append(i)
    print(shortest(l))

