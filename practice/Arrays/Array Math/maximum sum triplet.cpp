// Given an array A containing N integers.

// You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.

// If no such triplet exist return 0.

#define max(a,b) (((a)>(b))?(a):(b))
int solve(int* A, int n1) {
    int ans = 0;
    int i, j;
    for(i=1; i<n1-1; i++){
        int max1 = 0; int max2 = 0;
        for(j=0; j<i; j++){
            if(A[j]<A[i])
                max1 = max(max1, A[j]);
        }
        for(j=i+1; j<n1; j++){
            if(A[j]>A[i])
                max2 = max(max2, A[j]);
        }

        if(max1 && max2)
            ans = max(ans, max1+A[i]+max2);

       
    }
     return ans;
}