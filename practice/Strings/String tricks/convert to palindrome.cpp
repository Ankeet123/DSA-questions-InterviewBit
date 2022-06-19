// Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

// If it is possible then return 1 else return 0.

bool check(string s, int i , int j)

{

    while(i <= j)

    {

        if(s[i] != s[j])return false;

        i++; j--;

    }

    return true;

}


int Solution::solve(string s) {

    int i = 0, j = s.length()-1;

    /* Check if the whole string is palindrome */

    if(check(s, i, j))return 1;

    while(i <= j)

    {

        if(s[i] == s[j])

        i++ ,j--;

        /* if mismatch, check for palindromic substring by remove one character at a time */

        else

        {

            if(check(s, i+1, j) || check(s, i, j-1))return 1;

            else return 0;// if removal of one character doesnt work then return 0

        }

    }

}
