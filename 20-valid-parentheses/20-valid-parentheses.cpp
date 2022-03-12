class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int flag=0;
        int y=0;
        
        if(s.length()==1){
            return false;
        }
        if(s[0]==')' ||s[0]==']' || s[0]=='}'){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' ||s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')' ||s[i]==']'||s[i]=='}'){
                y=1;
                if(st.empty()){
                    return false;
                }
                int x=st.top();
               
                if(s[i]==')' && x!='('){
                     
                    flag=1;
                    break;
                }
                else if(s[i]==']' && x!='['){
                   
                    flag=1;
                    break;
                }
                else if(s[i]=='}' && x!='{'){
                    
                    flag=1;
                    break;
                }
                else{
                    st.pop();
                }
            }
        }
        if(y==0){ return false;}
        
        if(flag==1){
            return false;
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};