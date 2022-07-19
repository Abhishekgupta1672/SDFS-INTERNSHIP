class Solution {
public:
    vector<int>original;
    int n;
    Solution(vector<int>& nums) {
        original = nums;
        n = original.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int>shuffled = original;
        int leftsize=n;
        for(int i=n-1;i>=0;i--)
        {
            int j = rand()%leftsize;
            swap(shuffled[i],shuffled[j]);
            leftsize--;
        }
        return shuffled;
    }
};
