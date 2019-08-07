#include<iostream> 
using namespace std; 
int main(void) 
{int sum=23,i=10; 
while(i<1000) 
{if(i%3==0||i%5==0) 
sum+=i;
i++;
}
cout<<sum; 
return 0;}
