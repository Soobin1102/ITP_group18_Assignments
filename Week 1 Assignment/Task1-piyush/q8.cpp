#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of rows to be there in the pattern:"<<endl;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        for(int j=n;j>0;j--){
            if(j<=i){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
    return 0;
}