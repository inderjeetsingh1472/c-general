#include<iostream>
#include<math.h>
using namespace std;
void fac(int n){
int factorial=1;
for(int i=1;i<=n;i++){
factorial*=i;}
cout<<factorial;

return ;
}

int main(){
    int n;
    cin>>n;
    fac(n);
    return 0;
}