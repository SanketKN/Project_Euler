#include <iostream>
using namespace std;
int cd(int a, int b)
{if (a == 0)
  return b;
 return cd(b % a, a);}
int main(void)
{long hcf = 1, lcm = 1;
 int i;
 for(i = 2; i <= 20; i++)
 {hcf = cd(lcm, i);
  lcm = (lcm * i) / hcf;}
  cout<<" Lcm is: "<<lcm;
  return 0;}



