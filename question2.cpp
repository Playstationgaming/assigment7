#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=size-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int min=arr[1];
    for(int i=0;i<=size-1;i++){
        if(min>arr[i]){
    min=arr[i];
        }
    }
    int sum=min+max;
    cout<<sum<<endl;
return 0;
}