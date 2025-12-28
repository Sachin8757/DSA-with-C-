// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number";
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//             break;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter number";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}