#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                // cout<<i<<"this ids not prime"<<endl;
                break;
            }

        }
        if(i==num){
            cout<<i<<"this is prime"<<endl;
        }
    }
}