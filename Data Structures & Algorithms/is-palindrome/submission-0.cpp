class Solution {
public:
    string transformm(string s){
        string ans = "";
        for( char c : s){
            if(c >= 'a' and c <= 'z') ans += c;
            else if(c >= 'A' and c <= 'Z') ans += (char)(c + 32);
            else if(c >= '0' and c <= '9') ans += c;
        }
        return ans;
    }
    bool isPalindrome(string s) {
        s = transformm(s);
        int n = s.length();
        for(int i=0;i<n/2;i++){
            if(s[i] != s[n-1-i]) return false;
        }
        return true;
    }
};
