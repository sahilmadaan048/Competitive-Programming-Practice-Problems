// https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        unordered_map<char, int> = {
        	{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}
        };
        for(int i=0; i<n; i++) {
        	if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
        		st.push(s[i]);
        	} 
        	else{
        		if(s[i] == ')' and st.top() == '('){
        			st.pop();
        		}
        		else if(s[i] == ']' and st.top() == '['){
        			st.pop();
        		}
        		else if(s[i] == '}' and st.top() == '{'){
        			st.pop();
        		}
        		else return false;
        	}
        }
        return st.empty();
    }
};