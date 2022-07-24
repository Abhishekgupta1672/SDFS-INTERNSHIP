class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mp;
        char p;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            for(auto x:mp)
            {
                if(x.second==2)
                    return x.first;
            }
        }
        return p;
    }
};
