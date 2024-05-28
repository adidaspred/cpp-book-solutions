#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the max no of terms :"<<endl;
    cin>>n;
    int x=0;
    int y=1;
    int z=0;
    while(z<=n){
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}