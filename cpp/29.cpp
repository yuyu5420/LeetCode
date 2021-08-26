class Solution {
public:
    int divide(int dividend, int divisor) {
            long int x = (long int)dividend/(long int)divisor;
            if(x > INT_MAX){
                return INT_MAX;
            }
            return (int)x;
    }
};