/*  1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1*/
    #include<iostream>
    #include<math.h>
    using namespace std;
    int fac(int n){
int fact=1;
    for(int i=1; i<=n;i++){
fact*=i;
    }
    return fact;}
    int main(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<=i;j++){
              
                int ans=fac(i)/(fac(i-j)*fac(j));
                cout<<ans<<"  ";
            }
            cout<<endl;
        }
return 0;

    }