// #Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the lenght ";
    cin>>n;
   int  array[n];
   bool first=true;
   int c=0;
   for(int i=0;i<n;i++){
    cin>>array[i];
   }
   int size=sizeof(array)/sizeof(array[0]);
   for(int i=1;i<size;i++){
    for(int j=i+1;j<size;j++){
        if (array[i]>array[j]){
            first=false;
        }

    }
    for(int j=i-1;j<=0;j--){
 if (array[i]<array[j]){
            first=false;
        }

    }
    if (first==true){
        cout<<array[i];
    }
    else{
        cout<<"-1";
    }
   }
   


    return 0;
}



