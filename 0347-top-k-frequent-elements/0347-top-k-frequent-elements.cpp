class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<int> result;
        priority_queue<pair<int, int>> pq;
        for (auto it : freq) {
            pq.push({it.second, it.first});
        }
        while (k > 0) {
            result.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return result;
    }
};