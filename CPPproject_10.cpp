#include<iostream> 
using namespace std; 
int main(void) 
{long i,sum=17,j,x=0; 
for(i=9;i<2000000;i=i+2)
{for(j=3;j<=i/2;j=j+2)
  {if(i%j==0) 
    {x++; 
     break;}}  
 if(x==0)
 {cout<<i<<endl;
 sum+=i;} 
 x=0;} 
 cout<<"sum is "<<sum;
 return 0;}
