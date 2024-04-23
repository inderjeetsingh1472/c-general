#include<iostream>
using namespace std;
int main()
{
    int column;
    cout<<"enter the no of columns";
    cin>>column;
    for(int i=1; i<=5;i++){
        for(int n=1; n<=column;n++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}