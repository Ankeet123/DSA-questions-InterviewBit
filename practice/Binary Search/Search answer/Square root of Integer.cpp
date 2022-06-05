// Given an integer A.

// Compute and return the square root of A.

// If A is not a perfect square, return floor(sqrt(A)).

// DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

// NOTE: Do not use sort function from standard library. Users are expected to solve this in O(log(A)) time.



// Input Format
// The first and only argument given is the integer A.



// Output Format
// Return floor(sqrt(A))

int Solution::sqrt(int A) {
    if(A == 0 || A == 1){
        return A;
    }
    // int i = 1; 
    // int ans = 1;
    // while(ans<=A){
    //     i++;
    //     ans = i*i;
    // }
    // return i-1;
    long long start = 1, end = A, ans = -1, mid;

    while(start<=end){
        mid = (start + end)/2;
        long long sqr = mid * mid;
        if(sqr==A){
            return mid;
        }
        else if(sqr<=A){
            start = mid + 1;
        }
        else{
            end = mid - 1;
            ans = end;
        }
    }

    return ans;
}
