class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m1;
        int res=s.size();
        bool b=0;
        for(int i=0;i<res;i++)
        {
            ++m1[s[i]];
        }
        for(auto it:m1)
        {
            if(it.second &1)
            {
                res-=1;
                b=1;
            }            
        }
        if(b)
            return res+1;
        return res;
    }
};
