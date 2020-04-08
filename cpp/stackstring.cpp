

Given a string S and a set of n substrings. Remove every instance of those n substrings from S so that S is of the minimum length and output this minimum length.

Example 1

S = ccdaabcdbb
n = 2
substrings = ab, cd

Output

2

Explanation:

ccdaabcdbb -> ccdacdbb -> cabb -> cb (length=2)

Example 2

S = abcd
n = 2
substrings = ab,bcd

Output

 1

How do I solve this problem ?




The following solution would have an complexity of O(m * n) where m = len(S) and n is the number of substring

def foo(S, sub):
    i = 0
    while i < len(S):
        for e in sub:
            if S[i:].startswith(e):
                S = S[:i] + S[i+len(e):]
                i -= 1
                break
        else: i += 1
    return S, i


