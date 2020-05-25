// Binary Search
/*
int binarySearch(int *a, int left, int right, int find){
	int middel=0;
	if(left<right)middel=(left+right)/2;
	if(a[middel]<find){
		right=middel;
		middel=binarySearch(a,left,right,find);
	}
	else if(find==a[middel]){
		return middel;
	}
	else if(a[middel]>find){
		left=middel;
		middel=binarySearch(a,left,right,find);
	}
	return middel;
}
*/
int bin_search(int A[], int left, int right, int k)
{
	int st=left;
	int en = right;
	while(st<=en)
	{
	int mid = (st+en)/2;
	if(A[mid]==k) return mid;
	else if(A[mid]>k) en = mid-1;
	else st = mid+1;
	}
	return -1; 
}
