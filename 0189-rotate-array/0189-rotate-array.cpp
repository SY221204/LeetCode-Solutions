class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            k = k % nums.size();
            reverse(nums.begin(), nums.end());         // Reverse everything
            reverse(nums.begin(), nums.begin() + k);   // Reverse first k elements
            reverse(nums.begin() + k, nums.end());     // Reverse remaining elements    
    }
};