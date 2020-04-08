def myfun(my_aray):
    listing = []
    for i in range(len(my_aray)):
        listing.append((my_aray[i][0], my_aray[i][1], i))
    listing.sort()
    ending_1 = 0
    ending_2 = 0
    res_listing = []
    for begin, over, identy in listing:
        if begin < ending_1 and begin < ending_2:
            return "IMPOSSIBLE"
        if begin >= ending_1:
            res_listing.append(('C', identy))
            ending_1 = over
        else:
            res_listing.append(('J', identy))
            ending_2 = over
    r = ''
    for c, identy in sorted(res_listing, key=lambda x: x[1]):
        r += c
    return res
Testcase = int(input())
for T in range(1, Testcase + 1):
    activites = int(input())
    listing = []
    for _ in range(activites):
        interval = [int(i) for i in input().split(" ")]
        listing.append(interval)
    re = myfun(listing)
    print("Case #{}: {}".format(T, re))