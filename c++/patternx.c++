#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int m=i;m>=1;m--){
            cout<<m;
        }
        if(i>=2){
        for(int k=2;k<=i;k++){
            cout<<k;
        }
        }
        cout<<endl;
    }
}