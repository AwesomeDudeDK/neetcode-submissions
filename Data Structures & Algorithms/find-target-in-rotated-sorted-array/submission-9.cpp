class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int m = l + (r - l) / 2;
            cout << nums[m] << endl;
            if (nums[m] == target) return m;

            if (nums[m] >= nums[l]) { // if the left side is sorted
                if (target >= nums[l] && target <= nums[m]) { 
                    r = m;
                } else {
                    l = m + 1;
                }
            } else { // if the right side is sorted
                if (target >= nums[m] && target <= nums[r]) { 
                    l = m + 1;
                } else {
                    r = m;
                }
            }
        
        }

        cout << nums[l] << endl;
        if (nums[l] == target) return l;
        return -1;
    }
};
