class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>set(nums.begin(),nums.end());
        int maxlen = 1;
        for(int num : nums){
            int len = 1;
            while(set.find(num+1) != set.end()){
                len++;
                num++;
            }
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};
