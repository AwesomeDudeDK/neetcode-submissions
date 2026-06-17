class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int i : nums) {
            ++counts[i];
        }

        vector<vector<int>> frequency(nums.size() + 1);
        for (const auto& p : counts) {
            frequency[p.second].push_back(p.first);
        }

        vector<int> vec;
        for (int i = frequency.size() - 1; i > 0; --i) {
            for (int j : frequency[i]) {
                vec.push_back(j);
                if (vec.size() == k) return vec;
            }
        }
        return vec;



        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        // for (auto& p : counts) {
        //     heap.push(make_pair(p.second, p.first));
        //     if (heap.size() > k) {
        //         heap.pop();
        //     }
        // }

        // vector<int> vec;
        // for (int i = 0; i < k; i++) {
        //     vec.push_back(heap.top().second);
        //     heap.pop();
        // }
        // return vec;

    }
};
