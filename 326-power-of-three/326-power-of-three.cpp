class Solution {
public:
    
    bool solve(int n){
        if(n%3!=0){return false;}
        if(n<9 && n!=3){
            return false;
        }
        // if(n<3){
        //     if(n==2){return false;}
        //     if(n==1 )
        // }
        if(n==3){return true;}
        
        return solve(n/3);
        
        
    }
    bool isPowerOfThree(int n) {
        if(n==0){return false;}
        if(n==1){return true;}
        if(n%3!=0){return false;}
        int x=solve(n);
        return x;
    }
};