#include<iostream>
using namespace std;

int main(){
    int n,rev;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    rev=0;
    while(n>0){
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<"the rever of the number is "<<rev;
    return 0;
}