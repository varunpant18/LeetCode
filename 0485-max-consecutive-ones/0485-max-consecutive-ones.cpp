class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int tempcount = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                tempcount++;
                count = max(count, tempcount);
            } else {
                tempcount = 0;
            }
        }

        return count;
    }
};