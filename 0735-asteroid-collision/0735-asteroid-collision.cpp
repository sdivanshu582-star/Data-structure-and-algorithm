
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for(int a : asteroids) {

            bool alive = true;

            // Collision possible only when
            // stack top is positive and current is negative
            while(!st.empty() && st.top() > 0 && a < 0) {

                if(st.top() < abs(a)) {
                    // Stack asteroid explodes
                    st.pop();
                }

                else if(st.top() == abs(a)) {
                    // Both explode
                    st.pop();
                    alive = false;
                    break;
                }

                else {
                    // Current asteroid explodes
                    alive = false;
                    break;
                }
            }

            if(alive) {
                st.push(a);
            }
        }

        // Convert stack into answer
        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
