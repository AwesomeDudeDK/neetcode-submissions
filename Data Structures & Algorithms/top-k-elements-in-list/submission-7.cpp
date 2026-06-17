class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int i : nums) {
            ++counts[i];
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for (auto& p : counts) {
            heap.push(make_pair(p.second, p.first));
            if (heap.size() > k) {
                heap.pop();
            }
        }

        vector<int> vec;
        for (int i = 0; i < k; i++) {
            vec.push_back(heap.top().second);
            heap.pop();
        }
        return vec;

    }
};
