
    string toGoatLatin(string S) {
        stringstream s(S);
        string word;
        string res="";
        int i=1;
        if(S.size()<1)
            return res;
        while (s >> word) 
        {
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U')
            {
                res +=word+"ma";
            }
            else
            {
                char c=word[0];
                word.erase(word.begin() + 0);
                res+=word+c+"ma";                
            }
            res.append(i, 'a');
            ++i;
            res+=" ";
        }
        
        res.pop_back();
        return res;
    }
