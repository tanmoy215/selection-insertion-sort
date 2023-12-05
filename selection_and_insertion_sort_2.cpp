#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=4;
    string str[n] = {"sxd","wskf","kdhd","ssa"};
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    cout<<endl;
    //bubble sort
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);   
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}