#include<iostream>
using namespace std;
int main(void)
{int i,j,k,count=0;//There might be some mistakes
 j=1,k=0;//I didn't have a proper IDE
do{j=j+k;
   for(i=1;i<=j/2;i++)
    if(j%i==0)
     count++;
   if(count>500)
    break;
   count=0;
   k++;
 }while(k<100000000);
 cout<<j;
}
