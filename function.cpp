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
// pallindrome number

#include<bits/stdc++.h>
using namespace std;
int pallindromenumber(int n)
{
  int original = n;
  int reverse = 0;
  while (n!=0){
    int digit = n%10;
    reverse = reverse *10+digit;
    n=n/10;
  }
if (original==reverse){
return true;
}
else{
return false ;
}
int main ()
{
  int n = 121;
  cout<<pallindromenumber(n)<<endl;
}
