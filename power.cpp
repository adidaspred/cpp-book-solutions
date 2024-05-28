#include<iostream>

#include<cmath>
long double power(double m,int n)
{
 long double mn=pow(m,n);
 return mn;
}

long double power(double m,long int n=2)
{
 long double mn=pow(m,n);
 return mn;
}
int main()
{
 long double mn;
 double m;
 int n;
 cout<<" Enter the value of m & n"<<endl;
 cin>>m>>n;
 mn=power(m,n);
 cout<<" m to power n : "<<mn<<endl;
 mn=power(m);
 cout<<" m to power n : "<<mn<<endl;
 return 0;
}
