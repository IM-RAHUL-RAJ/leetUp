class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        char x;
        // for(auto i:m ){
        //     if(i.second==1){
        //         x=i.first;
        //         cout<<x<<endl;
        //         break;
        //     }
        // }
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==1){
                return i;
                
            }
        }
        
        return -1;
        
        
    }
};