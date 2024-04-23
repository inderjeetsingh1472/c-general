#include<iostream>
#include<math.h>
using namespace std;
bool triplet(int a,int b,int c){
    int d=max(a,max(b,c));
    int e,f;
    if(d==a){
        e=b;
        f=c;
    }
    else if(d==b){
        e=a;
        f=c;
    }
    else{
        e=a;
        f=b;
    }
    if(d*d==e*e + f*f){
        return true;
    }
    
       return false;
    
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
if(triplet(x,y,z)){
    cout<<"this is pythagories triplet"<<endl;
}
else{
    cout<<"this is not a pythgories triplet";
}
return 0;
}