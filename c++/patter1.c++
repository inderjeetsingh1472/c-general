#include<iostream>
using namespace std;
int main()
{
    int column,row;
    cout<<"enter the value of column\n";
    cout<<"entre the value of row\n";
    cin>>column>>row;
    for(int i=1;i<=row;i++){
        for(int n=1;n<=column;n++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;

}