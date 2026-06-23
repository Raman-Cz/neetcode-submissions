class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int rem = target - numbers[i];

            if(mp.count(rem) != 0) return {min(mp[rem]+1,i+1),max(mp[rem]+1,i+1)};
            mp[numbers[i]] = i;
        }

        return {0,0};
    }
};
