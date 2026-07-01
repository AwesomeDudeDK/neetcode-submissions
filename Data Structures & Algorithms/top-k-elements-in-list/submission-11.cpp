class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i : nums) freq[i]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (const auto& entry : freq) {
            pq.push({entry.second, entry.first});
            if (pq.size() > k) pq.pop();
        }

        vector<int> ret;
        for (int i = 0; i < k; i++) {
            ret.push_back(pq.top().second);
            pq.pop();
        }

        return ret;
    }
};
