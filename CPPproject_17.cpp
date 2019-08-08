#include <iostream>
#include <stdlib.h>
using namespace std;
class digits
{private: int a1[10]={0,3,3,5,4,4,3,5,5,4};
          int a2[10]={3,6,6,8,8,7,7,9,8,8};
          int a3[10]={0,3,6,6,6,5,5,7,6,6};
 public: int onedigit(int);
         int twodigit(int);
}obj;
int digits::onedigit(int x)
{return a1[x];
}
int digits::twodigit(int x)
{int y=0,a,n;
 n=x%10;
 a=x/10;
 if(x<20)
  return a2[a];
 else 
  y=a1[n]+a3[a];
 return y;
}
int main(void)
{int sum=0,count=0,x=1,x1=1,dig=0;
 while(x<1000)
 {while(x1>0)
  {x1=x1/10;
   dig++;
  }
 if(dig==1)
  count=obj.onedigit(x);
 else if(dig==2)
  count=obj.twodigit(x);
 else
 {int y,y1;
  y=x%100;
  y1=x/100;
  if(y==0)
   count=0;
  else if(y<10)
   count=obj.onedigit(y)+3;
  else 
   count=obj.twodigit(y)+3;
  count=count+obj.onedigit(y1)+7;
 }sum=sum+count;
  count=0;dig=0;
  x1=x+1;
  x++;
 }sum+=11;
 cout<<sum;
}
