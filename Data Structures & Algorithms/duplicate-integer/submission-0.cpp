class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>set;
        for(int n : nums){
            if(set.count(n) != 0) return true;
            set.insert(n);
        }
        return false;
    }
};