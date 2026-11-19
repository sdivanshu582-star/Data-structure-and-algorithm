class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> digits;
        int remaining = k;
 
        // Process every digit from left to right.
        for (char digit : num) {
            // Remove larger previous digits to make the number smaller.
            while (remaining > 0 && !digits.empty() &&
                   digits.top() > digit) {
                digits.pop();
                remaining--;
            }
 
            // Retain the current digit for future comparisons.
            digits.push(digit);
        }
 
        // A non-decreasing sequence needs removals from the end.
        while (remaining > 0 && !digits.empty()) {
            digits.pop();
            remaining--;
        }
 
        string result;
 
        // Stack order is reversed, so collect digits first.
        while (!digits.empty()) {
            result.push_back(digits.top());
            digits.pop();
        }
 
        reverse(result.begin(), result.end());
 
        int start = 0;
 
        // Skip leading zeroes from the final number.
        while (start < result.size() && result[start] == '0') {
            start++;
        }
 
        // No remaining digit represents zero.
        if (start == result.size()) {
            return "0";
        }
 
        return result.substr(start); 
    }
};