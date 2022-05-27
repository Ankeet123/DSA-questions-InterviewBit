// Given a sorted array A containing N integers both positive and negative.

// You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.

// Try to this in O(N) time.

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
#include<iostream>

int* solve(int* A, int n1, int* len1) {
    
    int *ret = (int* )malloc(sizeof(int) * n1);
    int i = n1 - 1;
    *len1 = n1;
    
    int left = 0, right = n1 - 1;
    while(left <= right) {
        if(A[left] < 0) {
            if(-A[left] > A[right]) {
                ret[i--] = A[left] * A[left];
                left++;
            } else {
                ret[i--] = A[right] * A[right];
                right--;
            }
        } else {
            ret[i--] = A[right] * A[right];
            right--;
        }
    }
    return ret;
}