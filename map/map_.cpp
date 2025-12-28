// Map
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector<int> arr = {10, 5, 10, 15, 10, 5};
    map<int, int> mp;

    for (int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    cout<<mp.find(10)->second<<endl;
    return 0;
}