#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashmap.count(complement))
                return {hashmap[complement], i};
            hashmap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7};
    int target = 9;
    Solution sol;
    vector<int> res = sol.twoSum(nums, target);
    for (int i : res)
        cout << i << " ";  // Output: 0 1
    return 0;
}
