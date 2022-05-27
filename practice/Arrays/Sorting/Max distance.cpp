// Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].
#include<climits>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int maximumGap(const int* arr, int n) {
    int leftMin[n] ;
    int i;
    leftMin[0] = arr[0];
    for(i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], arr[i]);
 
 
    //leftMin[i] = min{ arr[0...i] }
 
 
    int maxDist = INT_MIN;
    i = n-1;
    int j = n-1;
 
    while(i>=0  &&  j>=0)
    {
        if(arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j-i);
            i--;
        }
        else
            j--;
    }
 
    return maxDist;
 
         
}
  