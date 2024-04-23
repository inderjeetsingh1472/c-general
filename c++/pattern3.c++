#include<iostream>d
using namespace std;
int main(){
    int col,row;
    cin>>col>>row;
    for(int i=1;i<=row;i++){
        for(int n=1;n<=col;n++){
        if (i==1 || i==row)
    {
            cout<<"*";
        }
        else if(n==1||n==n){
            cout<<"*";
        }
        else{
            cout<<" ";
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}
}
