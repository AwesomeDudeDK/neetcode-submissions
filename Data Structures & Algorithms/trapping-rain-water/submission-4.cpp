class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 1) return 0;

        int totalArea = 0;
        int accumulatedArea = 0;

        int l = 0; int r = 1;
        while (r < height.size()) {
            std::cout << accumulatedArea << '\n';
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

        std::cout << "Reverse!\n";
        l = height.size() - 2; r = height.size() - 1;
        while (l >= 0) {
            std::cout << accumulatedArea << '\n';
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


// the idea is we move along the heights with two pointers
// move the left and right pointers until the left pointer is at a height > 0
// once we find a position for the left pointer, move the right one until its height is >= left
// as we move the right pointer, add accumulated area, which is height[left] - height[right]
// when we find the position for the right pointer, add to total area, reset accum, move left pointer to right pointer