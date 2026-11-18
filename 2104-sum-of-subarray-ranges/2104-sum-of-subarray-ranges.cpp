class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
    //BRUTE FORCE 
//     int smallest; int largest;
//     int sum=0;
//     int n=nums.size();
//     for(int i=0;i<=n-1;i++){
//         smallest=nums[i];
//         largest=nums[i];
// for(int j=i+1;j<=n-1;j++){
//     largest=max(largest,nums[j]);
//     smallest=min(smallest,nums[j]);
//     sum=sum+(largest-smallest);
// }

//     }
//     return sum;    


//optimize solution 
 int n = nums.size();

        long long sumMax = 0;
        long long sumMin = 0;

        stack<int> st;

        // Sum of subarray minimums
        for(int i = 0; i <= n; i++) {
            while(!st.empty() &&
                  (i == n || nums[st.top()] >= nums[i])) {

                int mid = st.top();
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int right = i;

                long long L = mid - left;
                long long R = right - mid;

                sumMin += 1LL * nums[mid] * L * R;
            }

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Sum of subarray maximums
        for(int i = 0; i <= n; i++) {
            while(!st.empty() &&
                  (i == n || nums[st.top()] <= nums[i])) {

                int mid = st.top();
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int right = i;

                long long L = mid - left;
                long long R = right - mid;

                sumMax += 1LL * nums[mid] * L * R;
            }

            st.push(i);
        }

        return sumMax - sumMin;
    }
};