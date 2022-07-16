class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        temp.push_back(nums[0]);
        int len = 1;
        for(int i=0; i<n; i++)
        {
            if(temp.back() < nums[i])
            {
                temp.push_back(nums[i]);
                len++;
            }
            else
            {
                int index = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
                temp[index] = nums[i];
            }
        }
        return len;
    }
};
