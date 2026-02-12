#include <iostream>
using namespace std;
int main(){
    int arr[]={3,9,2,5,6,9};
    int small=INT16_MAX,big=INT16_MIN,sind=-1,bind=-1,size=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++){
        if(small>=arr[i]){
            small=arr[i];
            sind=i;
        }
        if(big<=arr[i]){
            big=arr[i];
            bind=i;
        }
    }
    cout<<"gretest vlaue ind="<<bind<<endl;
    cout<<"smallest vlaue ind="<<sind<<endl;

    return 0;
}