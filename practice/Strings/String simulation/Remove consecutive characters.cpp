// Given a string A and integer B, remove all consecutive same characters that have length exactly B.



// Problem Constraints
// 1 <= |A| <= 100000

// 1 <= B <= |A|



// Input Format
// First Argument is string A.

// Second argument is integer B.



// Output Format
// Return a string after doing the removals.

// string Solution::solve(string s, int k){
    // if (k == 1)
    //     return "";
    // string output = "";

    // stack<pair<char, int> > stk;
    // for (int i = 0; i < s.length(); i++) {

    //     if (stk.empty() == true) {
    //         stk.push(make_pair(s[i], 1));
    //     }
    //     else {
    //         if (s[i] == (stk.top()).first) {
    //             stk.push(
    //                 { s[i], stk.top().second + 1 }
    //             );
    //             if (stk.top().second == k) {
    //                 int x = k;
    //                 while (x) {
    //                     stk.pop();
    //                     x--;
    //                 }
    //             }
    //         }
    //         else {
    //             stk.push(make_pair(s[i], 1));
    //         }
    //     }
    // }
    // while (!stk.empty()) {
    //     output += stk.top().first;
    //     stk.pop();
    // }
    // reverse(output.begin(), output.end());
    // return output;
    string Solution::solve(string A, int B) { 
    if(B==1) return "";

    int N = A.size(); 
    string res = "";
    
    for(int i=0; i<N; i++){
        int cnt=1; 
        int j = i+1;
        while(A[j]==A[i]){
            j++; 
            cnt++;
        }
        if(cnt != B){
            while(i < j){
                res += A[i];
                i++;
            }
        }
        i = j-1;
    }
    return res;
}

