#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int n){
    int decimal=0;
    int i=1;
    while(n>0){
int conv=n%10;
decimal+=conv*i;
i*=2;
n=n/10;
    }
    return decimal;
}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"enter only binary number"<<endl;
        
    }
    else
    cout<<binarytodecimal(n)<<endl;
    return 0;

}
