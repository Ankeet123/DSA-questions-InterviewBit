// Determine whether an integer is a palindrome. Do this without extra space.

// A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic.

// Example :

// Input : 12121
// Output : 1


// Input : 123
// Output : 0

int Solution::isPalindrome(int A) {
    int i = 0;
    string s = to_string(A);
    int j = s.size()-1;

    int flag = 1;
    while(i<j){
        if(s[i]==s[j]){
            i++; j--;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}
