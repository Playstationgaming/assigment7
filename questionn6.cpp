#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int arr[N];
int prefix[N];
int suffix[N];
prefix[0];
suffix[N-1];
for(int &ele:arr){
    cin>>ele;
}
for(int i=1;i<N;i++){
prefix[i]=max(prefix[i-1],arr[i-1]);
}
for(int i=N-2;i>=0;i--){
suffix[i]=min(suffix[i+1],arr[i+1]);
}
for(int i=0;i<N;i++){
if(prefix[i]<arr[i] && arr[i]<suffix[i]){
return arr[i];
}
}
return -1;

}