class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;

        int maxWater = 0;

        while (l < r) {
            int water = min(heights[l], heights[r]) * (r - l);
            maxWater = water > maxWater ? water : maxWater;

            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxWater;
    }
};
