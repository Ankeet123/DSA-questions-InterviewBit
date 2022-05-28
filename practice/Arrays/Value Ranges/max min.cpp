// Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

// NOTE: You should make minimum number of comparisons.



// Problem Constraints
// 1 <= N <= 105

// -109 <= A[i] <= 109



// Input Format
// First and only argument is an integer array A of size N.



// Output Format
// Return an integer denoting the sum Maximum and Minimum element in the given array.

int Solution::solve(vector<int> &A) {
    int n = A.size();
    int i;
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int sum = 0;
    for(i=0; i<n; i++){
        minimum = min(minimum, A[i]);
        maximum = max(maximum, A[i]);
    }
    sum = maximum + minimum;

    return sum;

}
