#include <iostream>
#include <cmath>

using namespace std;
int primef(long long int y)
{int i,n; n=y;
 while(n%2==0)
 {cout<<"2";
  n=n/2;}
 for(i=3; i<=sqrt(n);i+=2)
 {while(n%i==0)
  {if(i>sqrt(n))
    return (0); }
   n=n/i;
   }
if(n>2)
 if(n>sqrt(y))
  return 0;
if (i<sqrt(y))
return 1;
}
int main(void)
{long long int x ,n ,a,flag,count;x=1;
 cout<<"thanks";
 count=0;
 while(x<=10000000000)
 {flag=primef(x);	
  if(flag==1)
   count++;
  x++;
  }cout<<count;}
