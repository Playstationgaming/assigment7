#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
     int size=sizeof(array)/sizeof(array[0]);
     int newarray[size];
int j=size-1;
    for(int i=0;i<=size-1;i++){
        newarray[j--]=array[i];
    }
    for(int i=0;i<=size-1;i++){
        cout<<newarray[i];
        if(i!=4){
            cout<<",";
        }
       
    }
   
     
    
return 0;
}