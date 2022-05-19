// Find the contiguous subarray within an array, A of length N which has the largest sum.
#include<climits>
#define min(x, y) ((x < y) ? x : y)
int maxSubArray(const int* A, int n1) {
    int max_so_far = INT_MIN;
    int max_end = 0;
    int i;
    for(i = 0; i<n1; i++){
        max_end = max_end + A[i];
        if(max_so_far < max_end){
            max_so_far = max_end;
        }
        if(max_end<0){
            max_end = 0;
        }
    }
    return max_so_far;
}