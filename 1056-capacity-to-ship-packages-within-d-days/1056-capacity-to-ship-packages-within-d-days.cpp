#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;
            int d = 1, cap = 0;

            for (int weight : weights) {
                if (cap + weight > mid) {
                    d++;
                    cap = 0;
                }
                cap += weight;
            }

            if (d > days) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};