#include<iostream>
using namespace std;

int main(){
    int n,count;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    count=0;
    for(int i=1;i<=n;i++){
        count=count+i;
        
    }
    cout<<"the sum of first n natural number is "<<count;
    return 0;
}