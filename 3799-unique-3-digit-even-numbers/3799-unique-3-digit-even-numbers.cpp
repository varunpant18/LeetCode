#include <unordered_set>
#include <vector>

class Solution {
public:
    int totalNumbers(const std::vector<int>& digits) {
        std::unordered_set<int> set;
        int n = digits.size();

        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) continue;
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    if (digits[k] % 2 == 0) {
                        int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                        set.insert(number);
                    }
                }
            }
        }

        return set.size();
    }
};
