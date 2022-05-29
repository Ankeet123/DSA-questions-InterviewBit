// Given a positive integer A, return its corresponding column title as appear in an Excel sheet.



// Problem Constraints
// 1 <= A <= 1000000000



// Input Format
// First and only argument is integer A.



// Output Format
// Return a string, the answer to the problem.



// Example Input
// Input 1:

//  A = 1
// Input 2:

//  A = 28


// Example Output
// Output 1:

//  "A"
// Output 2:

//  "AB"

string Solution::convertToTitle(int A) {
    
    int r;

    string res;

    while(A) {

        r = A%26;

        if(r == 0) r = 26;

        res.push_back((char)(64 + r));

        A = (A-1)/26;

    }


    reverse(res.begin(),res.end());

    return res;

}

