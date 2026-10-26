class Solution {
public:
    bool isValid(string s) {
           stack<char> st;
 
        // Every character is processed in original order.
        for (char ch : s) {
            // Opening brackets wait for a future matching close.
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
                continue;
            }
 
            // A closing bracket needs an available opening bracket.
            if (st.empty()) {
                return false;
            }
 
            char topBracket = st.top();
 
            // Closing parenthesis must match an opening parenthesis.
            if (ch == ')' && topBracket != '(') {
                return false;
            }
 
            // Closing brace must match an opening brace.
            if (ch == '}' && topBracket != '{') {
                return false;
            }
 
            // Matching closing and opening square brackets.
            if (ch == ']' && topBracket != '[') {
                return false;
            }
 
            // A valid pair is removed from the pending openings.
            st.pop();
        }
 
        // Balanced strings leave no unmatched opening bracket.
        return st.empty();
    }
};