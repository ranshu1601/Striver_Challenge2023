#include <iostream>
using namespace std ; 

double myPow(double x, int n) {
    double ans=1.0;
    long nn=n; // as n is an integer and it's absolute value may not be stored within the limits of integer

    if(nn<0) nn=-1*nn;
    while(nn){
        if(nn%2){
            ans=ans*x;
            nn=nn-1;
        }

        else{
            x=x*x;
            nn=nn/2;
        }
    }

    if(n<0) ans = (double)(1.0) / (double)(ans);
    return ans;
}


int main(){
    cout<<myPow(2.00000, 10);
    return 0;
}