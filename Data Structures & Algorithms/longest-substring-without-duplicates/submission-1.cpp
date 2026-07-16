class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        int i = 0;
        int j = 0;
        int n = s.length();
        int length = 1;
        unordered_set<char>set;
        while(j<n){
            char c = s[j];
            if(set.find(c) == set.end()){
                set.insert(c);
                length = max(length,j - i + 1);
            }
            else{
                while(s[i] != c){
                    set.erase(s[i]);
                    i++;
                }
                set.erase(s[i]);
                i++;
                set.insert(c);
            }
            j++;
        }

        return length;
    }
};
