class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ret(size, 1);

        for (int i = 1; i < size; i++) {
            ret[i] = nums[i - 1] * ret[i - 1];
        }

        int postfix = 1;
        for (int i = size - 1; i >= 0; i--) {
            ret[i] *= postfix;
            postfix *= nums[i];
        }
        return ret;
    }
};
