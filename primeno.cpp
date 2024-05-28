#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"enter the value:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        if(n%i==0)
        count++;
    i++;
    }
    if(count==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}