// Given a string A of parantheses  ‘(‘ or ‘)’.

// The task is to find minimum number of parentheses ‘(‘ or ‘)’ (at any positions) we must add to make the resulting parentheses string valid.

// An string is valid if:

// Open brackets must be closed by the corresponding closing bracket.
// Open brackets must be closed in the correct order.

int Solution::solve(string A) {
    int n=A.length(),op=0,cl=0,ans=0;
    for(int i=0;i<n;i++){
        if(A[i]=='(') op++;
        else cl++;
        if(op>0 && cl>0){ op--; cl--;}
        else if(cl>0 && op==0){ ans++; cl--;}
    }
    ans+=op;
    return ans;
}