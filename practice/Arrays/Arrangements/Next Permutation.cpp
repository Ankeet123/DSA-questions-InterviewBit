// Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers for a given array A of size N.

// If such arrangement is not possible, it must be rearranged as the lowest possible order i.e., sorted in an ascending order.

// Note:

// 1. The replacement must be in-place, do **not** allocate extra memory.
// 2. DO NOT USE LIBRARY FUNCTION FOR NEXT PERMUTATION. Use of Library functions will disqualify your submission retroactively and will give you penalty points.
// Input Format:

// The first and the only argument of input has an array of integers, A.
// Output Format:

// Return an array of integers, representing the next permutation of the given array.

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverseArr(int *A, int start, int end)
{
    int i = start, j = end, tmp;

    while(i < j)
    {
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
        i++; j--;
    }
}

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* nextPermutation(int* A, int n1, int *len1) {
    int i;

    *len1 = n1;

    if(n1 < 2) return A;

    for(i = n1-1; i > 0; i--)
    {
        if(A[i] > A[i-1])
        {
            break;
        }
    }

    if(i != 0)
    {
        int j;
        for(j = n1-1; j >= i; j--)
        {
            if(A[i-1] < A[j])
            {
                swap(&A[j], &A[i-1]);
                break;
            }
        }

    }

    reverseArr(A, i, n1-1);

    return A;
}
