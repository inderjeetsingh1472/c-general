#include<iostream>
#include<math.h>
using namespace std;
bool prime(int x){
    for(int i=2;i< sqrt(x);i++){
        
if((x%i)==0){
return false;
}

    }
   return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
if(prime(i)){
    cout<<i<<endl;
}
    }
    return 0;
}