#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int m=1;m<=n-i;m++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int t=2;t<=i;t++){
            // if(t==0){cout<<"  ";}
            // else
            cout<<"* ";}      
                    cout<<endl;
    }
    for(int k=1;k<=n;k++){
        for(int f=2;f<=k;f++){
            cout<<"  ";
        }
        for(int g=k;g<=n;g++){
            cout<<"* ";
        }
        for(int x=k+1;x<=n;x++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
    
    