class Solution {
public:
    int numberOfSubstrings(string s) {
       int n = s.length();
        int l = 0;
        int count = 0;
        int freq[3] = {0};

        for (int r = 0; r < n; r++) {
            freq[s[r] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                count += n - r;

                freq[s[l] - 'a']--;
                l++;
            }
        }

        return count;   
    }
};