#include<iostream>
using namespace std;
int palindrome(int x)
{int dig,n,rev;
 n=x,rev=0;
	do{dig=n%10;
    rev=(rev*10)+dig;
    n/=10;}while(n!=0);
 return rev;
}
int main(void)
{long i=100,j,largest=0,rev,a;
 do{for(j=100;j<1000;j++)
   {a=i*j;
   rev=palindrome(a);
   if((rev==a)&&(a>largest))
    largest=a;
  }i++	;
 }while(i<1000);
cout<<largest;
return 0;
}
