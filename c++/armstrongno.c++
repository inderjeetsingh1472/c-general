#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int orginaln=n;
while(n>0){
    int lastdigit;
    lastdigit=n%10;
    sum+=pow(lastdigit,3);
   n= n/10;
}
cout<<sum<<endl;
if(sum==orginaln){
    cout<<"this is armstrong no"<<endl;
}
else{
    cout<<"this is not armstrong";
}


return 0;}