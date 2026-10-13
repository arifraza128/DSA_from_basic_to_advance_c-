//print 5 array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    for(int i =0;i<5;i++){
        
    
    cout<<arr[i]<<endl;
    }
    return 0;
}

//sum of all array element

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int sum =0 ;
  
    for(int i =0;i<5;i++){
      sum=sum+arr[i];    

    }
        cout<<sum<<endl;
    return 0;
}
// sorted array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={29,32,98,45,09}
    bool sorted = true;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;;
            break;
        }}
if(sorted){
    cout<<"sorted"<<endl;
}
else(not sorted){
    cout<<"not sorted"<<endl;
}
return 0;
}
