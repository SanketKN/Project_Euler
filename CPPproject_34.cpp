#include<iostream>
using namespace std;
int fact(int x)
{int i,f=1;
 for(i=2;i<=x;i++)
  f*=i;
 return f;
}
int main(void)
{int i,x,r1,j=10,factsum=0,sum=0;
 for(i=10;i<100000;i++)
  {j=i;
   while(j)
   {r1=j%10;
    j/=10;
    factsum+=fact(r1);
   }if(factsum==i)
     sum+=factsum;
    factsum=0;
   }
  cout<<sum; 
} 
