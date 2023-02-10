#include<iostream>
using namespace std;
int main(){
    int n=5;
    int array[n];
    int newarray[n];
    for(int i=0;i<n-1;i++){
        cin>>array[i];

    }
     for(int i=0;i<n-1;i++){
        cin>>newarray[i];
        
    }
   int min=array[0]+newarray[1];
   for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
        if(min>array[i]+newarray[j]&& i!=j){
            min=array[i]+newarray[j];
        }
    }
   }
   cout<<min;
return 0;
}