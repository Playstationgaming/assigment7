#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
   int y=0;
    for(int i=0;i<size;i++){
        if(array[i]%2==1){
           y++;
        }
        
    }
     cout<<"Odd Numbers="<<y<<endl;
         cout<<"Even Numbers="<<size-y<<endl;
return 0;
}