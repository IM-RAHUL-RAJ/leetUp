class Solution {
public:
    
    
    double ans(double x,int n){
        
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
          if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            
            return myPow(x*x,n/2);
            x=x*x;
        }
        else{
            return x* myPow(x,n-1);
        }
        
    }
    double myPow(double x, int n) {
        // int k=n;
        // n=abs(n);
        double res=ans(x,n);
       
     return res;
      
            
        
}
};