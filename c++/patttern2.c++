#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int m=1;m<=n+1-i;m++)
        {
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}