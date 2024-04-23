//fibonacii is a sequence in which the next term is the sum of the privious term;
//like 0,1,1,2,3,5,8,13 and so on;
#include<iostream>
#include<math.h>
using namespace std;
void fib(int n){
    int t2=1;
    int t1=0;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        
    }
}

int main(){
int n;
cin>>n;
fib(n);
return 0;
}