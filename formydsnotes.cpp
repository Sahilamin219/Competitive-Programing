Problem: Given a sequence {X[0], X[1], . . . , X[N-1]}, determine its Longest Increasing Subsequence
(LIS) 5 – as the name implies. Take note that ‘subsequence’ is not necessarily contiguous.
Example:
N = 8, sequence = {-7, 10, 9, 2, 3, 8, 8, 1}
The LIS is {-7, 2, 3, 8} of length 4.
mysol:
vector seq(0)=sequence(0)
for(i 1 to end){
	if(sequence > st(i-1))
		vector st.push_back[sequence[i]]
		
	else
		check()

} 