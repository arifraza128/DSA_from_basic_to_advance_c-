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
//max in given array
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[5]={30,39,10,40,49};
    int maxi = arr[0];
    for (int i =0;i<5;i++){
        if(arr[i]<maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
    return 0;
}
//min in given array
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[5]={30,39,10,40,49};
    int maxi = arr[0];
    for (int i =0;i<5;i++){
        if(arr[i]<maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
    return 0;
}
// second largest number in array
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[5]={10, 100, 30, 46, 20};
    int largest = arr[0];
    int secondlargest= INT_MIN;
    for(int i=0;i<5;i++){
    if(largest<arr[i]){
        secondlargest=largest;
        largest=arr[i];
    }
        else if(arr[i] != largest && arr[i] > secondlargest){
        secondlargest=arr[i];
        }
    }
    
    cout<<secondlargest<<endl;
    return 0;
    }
