#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int duplicate(vector<int>&sachin){
//     int numbe=0;

//     for(int i=0;i<sachin.size();i++){
//         for(int j=i+1;j<sachin.size();j++){
//             if(sachin[i]==sachin[j]){
//                 cout<<sachin[i]<<endl;
//                 break;
//             }
//         }
//     }
// }

int duplicate2(vector<int>&sachin){

    sort(sachin.begin(),sachin.end());
    for(int i=1;i<sachin.size();i++){
        if(sachin[i]==sachin[i-1]){
            cout<<sachin[i]<<" "<<endl;
        }
    }
}

int main(){
    vector<int>sachin={2,3,4,5,3};
    duplicate2(sachin);

  

    return 0;
}