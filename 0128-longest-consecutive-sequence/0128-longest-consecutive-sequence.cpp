class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }

        int longestStreak = 0;

        for (int num : st) {
                if (st.count(num - 1) == 0) {
                    int currentStreak = 1;
                    int currentNum = num;

                while (st.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }
                longestStreak = max(longestStreak, currentStreak);
                }
        }             
        return longestStreak;
    }
};