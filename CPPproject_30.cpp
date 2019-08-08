#include<iostream>
using namespace std;
int power(long int x)
{int y=1,i;
 for(i=1;i<=5;i++)
  y*=x;
 return y;
}
int main(void)
{long int i,j,r1,psum=0,sum=0;
 for(i=10;i<500000;i++)
 {j=i;
  while(j)
  {r1=j%10;
   psum+=power(r1);
   j/=10;
  }if(psum==i)
  sum+=psum;
  psum=0;
 }cout<<sum;
}
