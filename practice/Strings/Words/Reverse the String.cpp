// Given a string A.

// Return the string A after reversing the string word by word.

// NOTE:

// A sequence of non-space characters constitutes a word.

// Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

// If there are multiple spaces between words, reduce them to a single space in the reversed string.


//  Input Format

// The only argument given is string A.
// Output Format

// Return the string A after reversing the string word by word.

string Solution::solve(string A) {
    int n = A.size();
    string s="",ans=""; 
    for(int i=0;i<n;i++){
        if(A[i]==' '){
            if(ans=="") ans=s+ans; 
            else ans= s+ " " + ans; 
            s = "";
        }
        else s+=A[i];
    }
    if(ans=="") ans=s+ans; 
    else ans= s+ " " + ans;
    
    bool flag = true; 
    int i=0;
    string res = "";
    while(ans[i]){
        if(ans[i]==' '){
            if(!flag) res += ans[i];
            flag = true;
        }
        else {
            flag = false; 
            res += ans[i];
        }
        i++;
    }
    return res;
}
