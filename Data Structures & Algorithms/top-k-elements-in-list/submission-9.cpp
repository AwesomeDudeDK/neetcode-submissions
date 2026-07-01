class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i : nums) freq[i]++;

        priority_queue<pair<int, int>> pq;
        for (const auto& [key, value] : freq) {
            pq.push({value, key});
        }

        vector<int> ret;
        for (int i = 0; i < k; i++) {
            ret.push_back(pq.top().second);
            pq.pop();
        }

        return ret;
    }
};
