class Solution {
public:
    
    //1st method
    
    bool isValid(string s) {
    stack<char> st;
    for(char c : s){
        if(c == '('|| c == '{' || c == '['){
            st.push(c);
        }else{
            if(st.empty()) return false;
            if(c == ')' && st.top() != '(') return false;
            if(c == '}' && st.top() != '{') return false;
            if(c == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}  
    
    
    
    //2nd methode
    
    bool isValid(string s) {
        stack<char>st;
        
        if(s.length()==0){
            return false;
        }
        if(s.length()==1){
            return false;
        }
        
        for(int i=0;i<s.length();i++){
            
            char ch=s[i];
            if(ch=='}' || ch==')' || ch==']'){
                if(st.size()==0) return false;
                if(ch=='}' && st.top()!='{') return false;
                if(ch==')' && st.top()!='(') return false;
                if(ch==']' && st.top()!='[') return false;
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};