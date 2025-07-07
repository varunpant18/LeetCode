class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Replace non-positive numbers with a large value
        for(int i = 0; i < n; i++) {
            if(nums[i] <= 0) {
                nums[i] = n + 1;
            }
        }

        // Step 2: Mark presence using index
        for(int i = 0; i < n; i++) {
            int num = abs(nums[i]);
            if(num >= 1 && num <= n) {
                if(nums[num - 1] > 0) {
                    nums[num - 1] = -nums[num - 1];
                }
            }
        }

        // Step 3: Find the first positive index
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                return i + 1;
            }
        }

        return n + 1;
    }
};