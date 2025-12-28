#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{

    vector<int> arr = {4, 4, 3, 5, 2, 6, 5};
    unordered_map<int, int> m;
     for(int i=0;i<arr.size();i++){
        int j=1;
       if( m.find(arr[i])!=m.end()){
        j++;
       }
       m.emplace(arr[i],j);
     }
     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
     }
    return 0;
}