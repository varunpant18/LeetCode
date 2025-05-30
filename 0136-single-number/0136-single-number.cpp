class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int key = 0;  
        for (int num : nums) {
            key ^= num;  
        }
        return key;  
    }
};