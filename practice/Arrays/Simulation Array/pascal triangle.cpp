// Given numRows, generate the first numRows of Pascal's triangle.
// Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

// Example:

// Given numRows = 5,

// Return

// [
//      [1],
//      [1,1],
//      [1,2,1],
//      [1,3,3,1],
//      [1,4,6,4,1]
// ]
// Constraints:
// 0 <= numRows <= 25

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>v(A);
    int i, j;
    for(i=0; i<A; i++){
        v[i].resize(i+1);
        v[i][0] = v[i][i] = 1;

        for(j=0; j<i; j++){
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }
    return v;
}
