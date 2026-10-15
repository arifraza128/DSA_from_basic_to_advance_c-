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

// find the number inside array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={20,45,30,40,100};
    int target = 45;
    bool found = false;
for(int i=0;i<5;i++){
if(arr[i]==target){
    found=true;
    break;
}
}
if(found){
    cout<<"found"<<endl;
}
else{
cout<<"not found"<<endl;
}
return 0;
}
// dynamic array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array element";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter index to remove: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid index";
        return 0;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
