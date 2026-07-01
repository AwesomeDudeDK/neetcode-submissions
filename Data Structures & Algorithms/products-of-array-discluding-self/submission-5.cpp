class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size); prefix[0] = 1;
        vector<int> suffix(size); suffix[size - 1] = 1;

        for (int i = 1; i < size; i++) {
            prefix[i] = nums[i - 1] * prefix[i - 1];
            suffix[size - (i + 1)] = nums[size - i] * suffix[size - i];
        }

        vector<int> ret(size);
        for (int i = 0; i < size; i++) {
            ret[i] = prefix[i] * suffix[i];
        }
        return ret;
    }
};
