#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={5,2,1,3,4,5,5};
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
  cout<<endl;
  int x=0;
  for(int i=0;i<n;i++){
    x*=10;
    x+=arr[i];
  }
  cout<<"First : "<<x<<endl;
  for(int i=n-1;i>=1;i--){
    if(arr[i]!=arr[i-1]){
        swap(arr[i],arr[i-1]);
        break;
    }
  }
//   for (int i = 0; i <n; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
  
  int y=0;
  for(int i=0;i<n;i++){
    y*=10;
    y+=arr[i];
  }
  cout<<"Second : "<<y<<endl;
  cout<<"SUM : "<<x+y;
}