#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        std::sort(strs.begin(), strs.end());

        const std::string& first = strs.front();
        const std::string& last = strs.back();
        std::string result;

        for (size_t i = 0; i < first.size(); ++i) {
            if (i >= last.size() || first[i] != last[i]) {
                break;
            }
            result += first[i];
        }

        return result;
    }
};