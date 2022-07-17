class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0 , r=0 , cnt = 0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                l++;
            }
            r++;
            cnt = max(cnt,r-l);
        }
        return cnt;
    }
};
