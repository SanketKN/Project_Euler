#include<iostream>
using namespace std;
int main(void)
{long int a1=1,a2=2,a3=a1+a2,sum=2;
 do{a1=a2;
 a2=a3;
 if(a2%2==0)
  sum+=a2;
 a3=a2+a1;	
}while(a2<4000000);
 cout<<sum;
 return 0;
}
