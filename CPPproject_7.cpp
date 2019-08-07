#include <iostream>
using namespace std;

int main() 
{long int a,x,n,i; 
x=2,a=3,n=0;
do{a++; 
 for(i=2;i<=a/2;i++)
  if(a%i==0)
  {n++;
   break;}
  if(n==0)
  x++;
 n=0;}while(x<10001);
cout<<"the 10001st prime number is "<<a; 
return 0;
} 
