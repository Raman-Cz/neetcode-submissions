class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int ans = 0;
        unordered_map<char,int>mp;
          int freq = 0;
        while(j<n){
            mp[s[j]]++;
            int size = j - i + 1;
          
            freq = max(freq,mp[s[j]]);
           

            if(size - freq <= k) ans = max(ans,size);
            else{
                mp[s[i]]--;
                i++;
            }
            j++;
        }

        return ans;
    }
};
