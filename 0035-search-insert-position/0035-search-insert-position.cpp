#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] == target) {
                return i; 
            } 
            else if (nums[i] > target) { 
                return i;
            }
        }
        return nums.size(); 
    }
};
