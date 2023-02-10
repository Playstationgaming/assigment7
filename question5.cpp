#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int array[n];
      int max=array[0];
      int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
  
    
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    int min=array[0];
    for(int i=0;i<size;i++){
        if(min>array[i]){
           min=array[i];
        }
    }
    int k=0;
    int c=max-min;
    int newarray[c+1];
    for(int i=min;i<=max;i++){
        newarray[k]=i;
        k++;
    }
  
    for(int i=0;i<=max-min;i++){
        for(int j=0;j<max-min;j++){
            if(i==array[j]){
                newarray[i]=0;
            }
        }

    }
    for(int i=0;i<=max;i++){
        if(newarray[i]!=0){
            cout<<newarray[i];
            
        }
    }
return 0;
 }