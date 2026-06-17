class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map of key = num and value = count of nums
        // after populating the map, make a sorted vector by counts
        // output according to k

        map<int, int> counts;
        for (int i : nums) {
            if (counts.count(i)) ++counts[i];
            else counts[i] = 1;
        }

        vector<pair<int, int>> sorted_counts;
        for (const auto& p : counts) {
            sorted_counts.push_back(make_pair(p.first, p.second));
        }

        sort(sorted_counts.begin(), sorted_counts.end(), [](const auto& a, const auto& b) {
                                                            return a.second > b.second;
                                                            });

        vector<int> vec{};
        for (int i = 0; i < k; i++) {
            vec.push_back(sorted_counts[i].first);
        }
        return vec;

    }
};
