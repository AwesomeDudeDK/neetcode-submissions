class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int n : nums) {
            s.insert(n);
        }
        return s.size() != nums.size();
    }
};