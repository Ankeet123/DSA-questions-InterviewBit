// You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.

// f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.
#include<climits>
#define max(x, y) (x>y ? x:y)
#define min(x, y) (x<y ? x:y)

// int f(int* A, int i, int j){
//     return abs(A[i] - A[j]) + abs(i-j);
// }
int maxArr(int* arr, int n1) {
//     int i= 0, j= 0;
    

//     int max_val = 0;

//     for(i=0; i<n1; i++){
//         for(j=i; j<n1; j++){
//             if(f(A, i, j) > max_val){
//                 max_val = f(A, i, j);
//             }
//         }
//     }
//     return max_val;
// }
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;
    int i;
    for (i = 0; i < n1; i++) {
 
        // Updating max and min variables
        // as described in algorithm.
        max1 = max(max1, arr[i] + i);
        min1 = min(min1, arr[i] + i);
        max2 = max(max2, arr[i] - i);
        min2 = min(min2, arr[i] - i);
    }
 
    // Calculating maximum absolute difference.
    return max(max1 - min1, max2 - min2);
}
 