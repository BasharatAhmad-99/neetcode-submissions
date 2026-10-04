class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int i=0;
        while(s[i]!='\0'){
            char c=s[i];
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }

                if(c==')' && st.top()=='('){
                    st.pop();
                }
                else if(c=='}' && st.top()=='{'){
                    st.pop();
                }
                else if(c==']' && st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
