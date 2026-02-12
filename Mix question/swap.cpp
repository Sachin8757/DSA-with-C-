#include <iostream>
using namespace std;
int main()
{
    int maxv = INT16_MIN, minv = INT16_MAX, minind = -1, maxind = -1;
    int arr[] = {4, 5, 2, 6, 9, 74};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (maxv <= arr[i])
        {
            maxv = arr[i];
            maxind = i;
        }
        if (minv >= arr[i])
        {
            minv = arr[i];
            minind = i;
        }
    }
    int temp = arr[minind];
    arr[minind] = arr[maxind];
    arr[maxind] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}