class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
                int topIndex = st.top();
                st.pop();

                int height = heights[topIndex];
                int width = st.empty() ? i : i - st.top() - 1;
                int area = height * width;
                maxArea = max(maxArea, area);
            }
            if (i < n) {
                st.push(i);
            }
        }
        return maxArea;
    }
};