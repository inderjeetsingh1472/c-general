#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter the value of a\n";
    cin>>a;
    int sum=0;
    for(int i=0; i<=a; i++){
        sum+=i;

    }
    cout<<"this is the sum of upto a numbers\n"<<sum<<endl;
    return 0;
}