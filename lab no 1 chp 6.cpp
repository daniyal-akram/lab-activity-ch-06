#include<iostream>
using namespace std;
int add(int,int);
int main()
{ int a,b;
 cout<< "Enter two Number For Sum :\n";
 cin>>a>>b;
 cout<<"The Sum of "<<a<<" And "<<b<<" is :"<<add(a,b);
}
int add(int a,int b)
{
 int sum=a+b;	
 return sum;
}
