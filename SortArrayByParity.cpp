 vector<int> sortArrayByParity(vector<int>& A) {        
        int len=A.size();
        if(len<2)
            return A;
        int i=0,od=INT_MIN;
        while(i<=len-1)
        {
            if(A[i]&1)
            {
                if(od<0)
                od=i;
                while( ++i<=len-1 && A[i]&1);
                if(i==len)
                    return A;
                int temp=A[i];
                A[i]=A[od];
                A[od++]=temp;
            }
            else if(od>=0 && !(A[i]&1))
            {
                int temp=A[i];
                A[i]=A[od];
                A[od++]=temp;
            }
            ++i;
        }
        return A;
    }
