// Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

// Example:

// Input : [1, 0]
// Return : [0, 1]
// Lets say N = size of the array. Then, following holds true :

// All elements in the array are in the range [0, N-1]
// N * N does not overflow for a signed integer

void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    
    for(int i=0; i<n; i++){
        A[i] = ((A[A[i]]%n)*n + A[i]);
    }
    for(int i=0; i<n; i++){
        A[i] = A[i]/n;
    }
}
// 3 and 4 are meant to be encoded… so (3 * 5 + 4 = 19) or (3 + 5 * 4 = 23)
// to get 3 : 19 / 5 = 3 or 23 % 5 = 3
// to get 4 : 19 % 5 = 4 or 23 / 5 = 4
// If “x” and “y” are meant to be encoded together the formula would be “(x * n + y)” or “(x + n * y)”. where n is the size of array.