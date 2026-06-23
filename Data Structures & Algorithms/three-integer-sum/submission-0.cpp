class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int lo = i + 1;
            int hi = n - 1;
            int target = -nums[i];

            while (lo < hi) {
                int sum = nums[lo] + nums[hi];

                if (sum == target) {
                    ans.push_back({nums[i], nums[lo], nums[hi]});

                    lo++;
                    hi--;

                    while (lo < hi && nums[lo] == nums[lo - 1])
                        lo++;

                    while (lo < hi && nums[hi] == nums[hi + 1])
                        hi--;
                }
                else if (sum < target) {
                    lo++;
                }
                else {
                    hi--;
                }
            }
        }

        return ans;
    }
};