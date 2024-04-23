#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int m=n-i;m>=1;m--){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int t=2;t<=i;t++){
            cout<<t<<" ";
        }
        cout<<endl;
    }
return 0;
}