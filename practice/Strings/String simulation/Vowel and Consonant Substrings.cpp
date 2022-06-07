// Given a string A consisting of lowercase characters.

// You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

// Return the count of substring modulo 109 + 7.



// Problem Constraints
// 1 <= |A| <= 105

// A consists only of lower-case characters.



// Input Format
// First argument is an string A.



// Output Format
// Return a integer denoting the the number of substrings in A which starts with vowel and end with consonants or vice-versa with modulo 109 + 7.

int Solution::solve(string A) {
    long int  l = A.length();
    long int mod = 1000000007;

    int vowel =0, cons =0;
    long int sum=0;

    for(int i=0;i<l;i++){
        A[i] = tolower(A[i]);
            if(A[i]=='a' || A[i]=='e' || A[i]=='i'|| A[i]=='o'|| A[i]=='u'){
                sum = ((sum+ cons%mod)%mod);
                vowel++;
            }
            else{
                sum = ((sum+ vowel%mod)%mod);
                cons++;
            }
    }

    return sum;
}

