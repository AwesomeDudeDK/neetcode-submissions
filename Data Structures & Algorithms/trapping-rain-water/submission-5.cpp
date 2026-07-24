class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 1) return 0;

        int totalArea = 0;
        int accumulatedArea = 0;

        int l = 0; int r = 1;
        while (r < height.size()) {
            if (height[l] == 0) {
                l++; r++;
            } else if (height[r] < height[l]) {
                accumulatedArea += height[l] - height[r];
                r++;
            } else {
                totalArea += accumulatedArea;
                accumulatedArea = 0;
                l = r;
                r++;
            }
        }
        accumulatedArea = 0;

        l = height.size() - 2; r = height.size() - 1;
        while (l >= 0) {
            if (height[r] == 0) {
                l--; r--;
            } else if (height[l] <= height[r]) {
                accumulatedArea += height[r] - height[l];
                l--;
            } else {
                totalArea += accumulatedArea;
                accumulatedArea = 0;
                r = l;
                l--;
            }
        }
        return totalArea;
    }
};