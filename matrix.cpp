#include <iostream>
using namespace std;

void read_matrix(int arr[50][50],int x,int y);
void display_matrix(int arr[50][50],int x,int y);

int main()
{   int arr[50][50],m,n;
    cout<<"enter size of the column=  ";
    cin>>m;
     cout<<"\nenter size of the row =  ";
    cin>>n;
    read_matrix(arr,m);
    display_matrix(arr,m);
    return 0;
}
void read_matrix(int arr[50][50],int x,int y=3)
{   int i;
    cout<<"enter element\n";
    for(i=0;i<x;i++){
        cin>>arr[i];
    }
    
}
void display_matrix(int arr[50][50],int x,int y=3)
{   
    int i;
    cout<<"matrix is:"<<endl;
    for(i=0;i<x;i++){
         cout<<arr[i]<<"\t";
        cout<<endl;
    }
    
    
        
   
    
}
