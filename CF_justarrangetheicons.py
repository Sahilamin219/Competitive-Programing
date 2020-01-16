def function(lis):
    lis_item = []
    lis_item_freq = []
    for i in lis:
        if i in lis_item:
            lis_item_freq[lis_item.index(i)] += 1
        else:
            lis_item.append(i)
            lis_item_freq.append(0)
            lis_item_freq[lis_item.index(i)] += 1

    least_occured = min(lis_item_freq)
    max_possible = least_occured+1 # it can be least_occured - 1
    for i in lis_item_freq:
        if 0 < i%max_possible < max_possible-1:
            # print("yes")
            max_possible -= 1

    summ = 0
    for i in lis_item_freq:
        summ += i//max_possible
        if i%max_possible!=0:
            summ+=1

    print(summ)
    # print(lis_item)
    # print(lis_item_freq)

t = int(input())

for i in range(t):
    length = int(input())
    value = input().split()
    function(value)