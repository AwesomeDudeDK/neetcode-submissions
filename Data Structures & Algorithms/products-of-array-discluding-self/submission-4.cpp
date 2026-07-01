class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size + 1); prefix[0] = 1;
        vector<int> suffix(size + 1); suffix[size] = 1;

        for (int i = 0; i < size; i++) {
            prefix[i + 1] = nums[i] * prefix[i];
            suffix[size - (i + 1)] = nums[size - (i + 1)] * suffix[size - i];
        }

        vector<int> ret(size);
        for (int i = 0; i < size; i++) {
            ret[i] = prefix[i] * suffix[i + 1];
        }
        return ret;
    }
};
