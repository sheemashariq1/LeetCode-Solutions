class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long m=n;
        if(m<0){
            x=1/x;
            m=-m;
        }
        while(m>0){
            if(m%2==1){
                result=result*x;
            }
            x=x*x;
            m/=2;
        }
        return result;
    }
};