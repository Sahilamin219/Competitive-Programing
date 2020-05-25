Given a positive integer n, return the smallest next higher integer with the same number of 1s as n in binary representation.
Example 1

Input

n = 3

Output

5

Explanation

3 in binary is 0011 and next higher from 3 with two ones would be 5 which is 0101 in binary.

class Solution:
2    def solve(self, n):
3        # Write your code here
4        copy = n
5        zeros = 0
6        ones = 0
7        while copy and not copy & 1:
8            zeros += 1
9            copy >>= 1
10        while copy & 1:
11            ones += 1
12            copy >>= 1
13        right = ones + zeros
14        n |= 1 << right
15        n &= ~((1 << right)-1)
16        n |= ((1 << ones-1) - 1)
17        return n
18Move through the number from lsb to find the rightmost 0 that occurs after any trailing 1's.

This 0 would become 1 for the next higher binary. so set it using
n |= 1 << right
Clear the right part to this set bit.
n &= ~((1 << right)-1)
since we already used one 1 above to flip a 0, add the remaining 1's to n from left.
n |= ((1 << ones-1) - 1)

Time complexity: O(k), where k is the no. of bits of n.
 	
