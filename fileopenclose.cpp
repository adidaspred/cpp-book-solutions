#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string st="kartikay arora";
    ofstream out("sample.txt");
    out<<st;
    out.close();

    string st2;
    ifstream in("sample.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    in.close();
}