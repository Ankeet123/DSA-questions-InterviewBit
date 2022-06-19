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
