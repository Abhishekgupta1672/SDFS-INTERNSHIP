class Solution {
public:
    int digitsum(int n)
    {
        int sum=0;
        while(n>0)    
        {    
        int m=n%10;    
        sum=sum+m;    
        n=n/10;    
        } 
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>res;
        for(int i=0;i<nums.size();i++)
            res.push_back({digitsum(nums[i]),nums[i]});
        sort(res.begin(),res.end());
        int maxi=INT_MIN;
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i].first==res[i+1].first)
            {
                maxi=max(maxi,res[i].second+res[i+1].second);
            }
        }
        return maxi==INT_MIN?-1:maxi;
    }
};
