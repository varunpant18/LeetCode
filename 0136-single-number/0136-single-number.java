class Solution {
    public int singleNumber(int[] nums) {
        int key = 0;
        for (int i = 0; i < nums.length; i++) { 
            key ^= nums[i]; 
        }
        return key;
    }
}