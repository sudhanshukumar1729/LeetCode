class Solution {
public:
    int partitionString(string s) {
        int ans = 0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length()-1;i++)
        {
            mp[s[i]]++;
            if(mp[s[i+1]]>=1)
            {
                    ans++;
                    mp.clear();
            }
        }
        return ans+1;
    }
};