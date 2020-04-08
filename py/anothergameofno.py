
def main():
    t = int(input())
    while (t):
        m, n = map(int, input().split())
        a , b= bin(m)[2:],bin(n)[2:]
        #print(a,b)
        max = m^n
        if len(a)>len(b):
            diff =len(a)-len(b)
            b= ("0"*diff)+b
            #print(b)
        elif len(a)<len(b):
            diff =len(b)-len(a)
            a= ("0"*diff)+a
            #print(a)
        ll = len(b)
        count= 0
        for i in range(ll-1):
            s= b[ll-1] + b
            s= s[:ll]

            tt= m^ int(s,2)
            #print(m,s,tt)
            if tt>max:
                max =tt
                count= i+1
            b=s

        print(count,max)
        t-=1

if __name__ == '__main__':
    main()
