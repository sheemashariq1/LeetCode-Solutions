class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n;
        int sum_digits=0;
        int prod_digits=1;
        while(n>0){
            sum_digits+=(n%10);
            prod_digits*=(n%10);
            n=n/10;
        }
        int sum=sum_digits+prod_digits;
        return org%sum==0 ;
    }
};