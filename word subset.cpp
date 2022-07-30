class Solution {
public:
    vector<int>countfreq(string str)
    {
        vector<int>freq(26);
        for(int i=0;i<str.size();i++)
        {
            freq[str[i]-'a']++;
        }
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>res;
        vector<int>maxfreq(26);
        for(auto x:words2)
        {
            vector<int>freq = countfreq(x);
            for(int i=0;i<26;i++)
                maxfreq[i] = max(maxfreq[i],freq[i]);
        }
        for(auto x:words1)
        {
            vector<int>freq = countfreq(x);
            int i = 0;
            for(i=0;i<26;i++)
                if(freq[i] < maxfreq[i])
                    break;
            if(i==26) res.push_back(x);
        }
        return res;
    }
};
