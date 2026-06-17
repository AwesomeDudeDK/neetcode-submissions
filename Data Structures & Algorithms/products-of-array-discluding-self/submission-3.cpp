class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        
        vector<int> output(len);

        int prefix = 1;
        for (int i = 0; i < len; i++) {
            output[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = len - 1; i >= 0; i--) {
            output[i] *= suffix;
            suffix *= nums[i];
        }

        return output;


        // int len = nums.size();
        
        // vector<int> prefix(len); // product of everything before index i
        // prefix[0] = 1; 
        // vector<int> suffix(len); // product of everything after index i
        // suffix[len - 1] = 1;

        // for (int i = 1; i < len; i++) {
        //     prefix[i] = prefix[i - 1] * nums[i - 1];
        // }

        // for (int i = len - 2; i >= 0; i--) {
        //     suffix[i] = suffix[i + 1] * nums[i + 1];
        // }

        // vector<int> output;

        // for (int i = 0; i < len; i++) {
        //     output.push_back(prefix[i] * suffix[i]);
        // }
        // return output;
    }
};
