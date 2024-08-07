#include <iostream>
using namespace std;

// Could have done it easier but it takes O(log n) time

class Solution{
public:
    double myPow(double x, int n){
        double ans=1.0;
        int nn=n;
        if (nn<0){
            nn = nn*(-1);
        }
        while (nn){
            if (nn%2==1){
                ans=ans*x;
                nn=nn-1;
            }
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        if (n<0){
            ans = double(1.0)/ double(ans);
        }
        return ans;
    }
};
