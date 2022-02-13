/* Problem -
https://binarysearch.com/problems/Balanced-Brackets-Sequel

Q. Given a string s containing round, curly, and square open and closing brackets, return whether the brackets are balanced.
*/

bool solve(string s) {
    stack<char> st;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == ')'){
            if(st.empty() || st.top() != '(') return 0;
            st.pop();
        }
        else if(s[i] == '}'){
            if(st.empty() || st.top() != '{') return 0;
            st.pop();
        }
        else if(s[i] == ']'){
            if(st.empty() || st.top() != '[') return 0;
            st.pop();
        }
        else st.push(s[i]);
    }
    return st.empty();
}
