class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int x=numsDivide[0];
      for (int i = 1; i < numsDivide.size(); i++)
      {
        x = gcd(numsDivide[i], x);

        if(x == 1)
        {
        x= 1;
            break;
        }
      }
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(x%nums[i]==0)
            {
                ans=i;
                break;
            }
        }
        
        return ans==INT_MIN?-1:ans;
    }
};
