// Given an array of integers A, every element appears twice except for one. Find that single one.


// NOTE: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

int Solution::singleNumber(const vector<int> &A) {
    int n = A.size();
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ A[i];
    }
    return ans;
}