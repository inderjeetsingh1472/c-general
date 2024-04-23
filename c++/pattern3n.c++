#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int m=1;m<=i;m++){
            if((i+m)%2==0){
                cout<<"1 ";
            }
            // else if(m-1!=0){
            //     cout<<"1";
            // }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}