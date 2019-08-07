#include <iostream>
#include <cmath>
using namespace std;
int primef(long int n, long int x)
{while(n%2==0)
 {cout<<"2";x=2;
  n=n/2;}
 for(int i=3; i<=n/2;i+=2)
 {while(n%i==0)
  {cout<<i<<endl;
  if(i>x)
    x=i;
    n=n/i;}}
if(n>2)
cout<<n<<endl;
return(x);
}
int main()
{long int x ,n ,a;
 n=600851475143; 
cout<<"prime factors are"<<endl;
a=primef(n,x);
cout<<"\nLargest prime factor is"<<a;
return(0);}
