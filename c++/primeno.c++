#include<iostream>
#include<math.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"this us non prime"<<endl;
            flag++;
            break;
        }
    }
    if(flag==0){
        cout<<"this us prime"<<endl;
    }
    return 0;
}