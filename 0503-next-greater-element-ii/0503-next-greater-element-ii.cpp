class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, -1); 
        
        for (int i = 0; i < n; i++) {
            int val = -1;
            for (int j = 1; j < n; j++) {
                int idx = (i + j) % n; 
                if (arr[idx] > arr[i]) {
                    val = arr[idx];
                    break;
                }
            }
            result[i] = val; 
        }

        return result;
    }
};