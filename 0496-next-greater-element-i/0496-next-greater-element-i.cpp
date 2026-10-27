class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          stack<int> st;
        unordered_map<int, int> mp;

        // Find next greater element for every element in nums2
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int x = nums2[i];

            while (!st.empty() && st.top() <= x) {
                st.pop();
            }

            if (st.empty()) {
                mp[x] = -1;
            } else {
                mp[x] = st.top();
            }

            st.push(x);
        }

        // Build answer for nums1
        vector<int> ans;

        for (int x : nums1) {
            ans.push_back(mp[x]);
        }

        return ans;  
    }
};