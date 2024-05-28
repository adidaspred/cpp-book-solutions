#include<iostream>
using namespace std;

int main(){
    int i,rev=0;
    cout<<"enter the value  of i"<<endl;
    cin>>i;
    int original=i;
    while(i>0){
        rev=(rev*10)+i%10;
        i=i/10;

    }
    if(rev==original){
        cout<<"the number is palindrome"<<endl;
        
    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }
    return 0;
}