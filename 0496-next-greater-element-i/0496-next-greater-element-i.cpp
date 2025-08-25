class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, k = 0;
        vector<int> ans(nums1.size());

        for (i = 0; i < nums1.size(); i++) {
            bool found = false;
            for (j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    found = true;
                    for (k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums1[i]) {
                            ans[i] = nums2[k];
                            break;
                        }
                    }
                    if (k == nums2.size()) {
                        ans[i] = -1;
                    }
                    break;
                }
            }
            if (!found) {
                ans[i] = -1;
            }
        }

        return ans;
    }
};