class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st,star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }


        while(!st.empty() && !star.empty() && star.top()>st.top()){
            st.pop();
            star.pop();
        }

        if(!st.empty()) return false;
        return true;
    }
};