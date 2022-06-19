// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P.......A........H.......N
// ..A..P....L....S....I...I....G
// ....Y.........I........R
// And then read line by line: PAHNAPLSIIGYIR

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string text, int nRows);
// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"
// **Example 2 : **

// ABCD, 2 can be written as

// A....C
// ...B....D
// and hence the answer would be ACBD.

string Solution::convert(string s, int B) {
    vector<string> ans(B);
     int j=0;
     bool f=false;
     if(B==1)
     {
         return s;
     }
    for(int i=0;i<s.size();i++)
    {
        if(j==0 || f==false)
        {
            ans[j]+=s[i];
            j++;

            if(j==B-1)
            {
                f=true;
            }
        }
        else
        if(j==B-1 || f==true)
        {
            ans[j]+=s[i];
            j--;
            if(j==0)
            {
                f=false;
            }
        }
    }

    string res="";

    for(int i=0;i<B;i++)
    {
        if(!ans[i].empty())
        {
            res+=ans[i];
        }
    }

    return res;
}
