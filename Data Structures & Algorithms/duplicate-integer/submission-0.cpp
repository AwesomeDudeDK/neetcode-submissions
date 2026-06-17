class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> appeared;
        for (int& num : nums) {
            if (std::ranges::contains(appeared, num)) return true;
            appeared.push_back(num);
        }
        return false;
    }
};