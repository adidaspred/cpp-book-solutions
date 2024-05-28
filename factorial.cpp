#include<iostream>
using namespace std;

int main(){
    int n ,fac;
    cout<<"enter the vlaue of n;"<<endl;
    cin>>n;
    fac=1;
    while(n>=1){
        fac=fac*n;
        n=n-1;
    }
    cout<<"the factorial is "<<"\n"<<fac<<endl;
    return 0;
}