#include<iostream>
#include<math.h>
using namespace std;
int sum(int n){
    int summ=(n*(n+1))/2;
    return summ;
}
int main(){
    int n;
    cin>>n;
cout<<sum(n)<<endl;
return 0;
}