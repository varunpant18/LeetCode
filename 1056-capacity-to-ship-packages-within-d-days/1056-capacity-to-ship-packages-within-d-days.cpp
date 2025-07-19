#include <iostream>
#include <vector>
#include <algorithm> // for std::max
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
            int d = 1, sum = 0;

            for (int weight : weights) {
                if (sum + weight > mid) {
                    d++;
                    sum = 0;
                }
                sum += weight;
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