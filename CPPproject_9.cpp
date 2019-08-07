#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{int a,b,c=0;
long x;
for(a=4;a<1000;a++)
{for(b=a+1;(a+b)<999;b++)
 {c=1000-(a+b);
  if((c*c)==((a*a)+(b*b)))
   break;
  c=0;
 }if(c>0) break;
} x=a*b*c;
cout<<x;
return 0;
}
