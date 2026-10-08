#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n)
{  
  int sum = 0;
  while(n%10!=0){
  int digit=n%10;
  sum=digit+sum;
  n=n/10;
  }
return sum;
int main(){
  int n=45782;
  cout<<sumdigit(n)<<endl;
}
