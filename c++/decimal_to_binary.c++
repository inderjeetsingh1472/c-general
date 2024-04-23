#include<iostream>
#include<math.h>
using namespace std;
int decimaltobinary(int n){
    int binary=0;
    while(n>0){
        int con=n%2;
binary=(binary*10)+con;
n=n/2;
    }
    return binary;
}
int main(){
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    return 0;
}

