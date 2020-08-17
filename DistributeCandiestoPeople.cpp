class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> vec(num_people,0);
        int dist_candies=1;
        
        for(int i=0;candies>0;i++,++dist_candies)
        {               
         candies-=dist_candies;
            if(candies>=0)
            vec[i]+=dist_candies;
            else  {
                vec[i]+=candies+dist_candies;
                return vec;
            }
        if(i==num_people-1)  
            i=-1;        
        }
        return vec;
    }
};
