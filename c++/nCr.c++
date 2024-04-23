#include<iostream>
#include<math.h>
using namespace std;
//nCr=n!/(n-r)!*r!
int fac(int n){
int fact=1;
    for(int i=1; i<=n;i++){
fact*=i;
    }
    return fact;
}
int main(){   
    int n,r;
    cin>>n>>r;
    int ans= fac(n)/(fac(n-r)*fac(r));
    cout<<ans<<endl;
    return 0;

    
    
}