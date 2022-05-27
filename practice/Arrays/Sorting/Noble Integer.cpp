// Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.



// Input Format
// First and only argument is an integer array A.



// Output Format
// Return 1 if any such integer p is found else return -1.

int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
       if(A[i]==A[i+1] && i<n-1)
         continue;
       if(A[i]==n-i-1){
         return 1;
       }
    }
    return -1;
}
