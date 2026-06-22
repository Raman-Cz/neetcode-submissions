class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s : strs){
            encoded += to_string(s.length()) + '#' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int n = s.length();
        int i = 0;
        while(i < n){
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            i = hashPos + 1;
            ans.push_back(s.substr(i, len));
            i += len;
        }
        return ans;
    }
};