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
    
    int arr[5]={10,20,25,30,40};
    bool sorted= true ;    
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
        if (sorted){
            cout<<"sorted";
        }
        else{
            cout<<"not sorted";
        }
        
    
    
    return 0;
}

//count even and odd

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={20,30,19,23,40,11,90};
    int even=0;
    int odd=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            even++;
                }
        else{
            odd++;
                }
    }
cout<<"even: "<<even<<endl;
cout<<"odd: "<<odd<<endl;
return 0;
}
