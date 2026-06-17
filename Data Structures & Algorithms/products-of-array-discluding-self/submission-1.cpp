class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        
        vector<int> prefix(len + 1);
        prefix[0] = 1;
        vector<int> suffix(len + 1);
        suffix[len] = 1;

        for (int i = 0; i < len; i++) {
            prefix[i + 1] = prefix[i] * nums[i];
            suffix[len - i - 1] = suffix[len - i] * nums[len - 1 - i];
        }

        vector<int> output;

        for (int i = 0; i < len; i++) {
            output.push_back(prefix[i] * suffix[i + 1]);
        }
        return output;
    }
};
