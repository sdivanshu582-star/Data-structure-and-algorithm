       
    class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] < nums[mid + 1]) {
                // Peak is on the right
                s = mid + 1;
            }
            else {
                // Peak is at mid or on the left
                e = mid;
            }
        }

        return s;
    }
};
