// All combinations of size r from an array
// Last Updated : 20 May, 2025
// You are given an array arr[] consisting of n elements. Your task is to generate and print all possible combinations of exactly r elements from this array.
// Note: A combination is a selection of items where the order does not matter. Ensure that each unique group of r elements is printed only once, regardless of order.

// Example:

// Input: arr = [1, 2, 3, 4], r = 2
// Output:
//                1 2
//                1 3
//                1 4
//                2 3
//                2 4
//                3 4
// Explanation: We need to generate all possible combinations of size 2 from an array of size 4. The total number of such combinations is given by the formula:
// 4C2 = 4! / [(4 - 2)! × 2!] = 6 combinations.

// Input: arr = [1, 2, 3, 4], r = 3
// Output:
//                1 2 3
//                1 2 4
//                1 3 4
//                2 3 4
// Explanation: We need to generate all possible combinations of size 3 from an array of size 4. The total number of such combinations is given by the formula:
// 4C3 = 4! / [(4 - 3)! × 3!] = 4 combinations.

#include <iostream>
#include <vector>
using namespace std;

// Helper function to print a combination
void printCombination(const vector<int> &combination)
{
    for (int num : combination)
        cout << num << " ";
    cout << endl;
}

// Recursive function to generate combinations
void generateCombinations(const vector<int> &arr, int r, int index,vector<int> &current, int start)
{
    // If the current combination is of size r, print it
    if (index == r)
    {
        printCombination(current);
        return;
    }

    // Generate combinations by including elements from start to end
    for (int i = start; i < arr.size(); ++i)
    {
        current[index] = arr[i];
        generateCombinations(arr, r, index + 1, current, i + 1);
    }
}

// Wrapper function
void printAllCombinations(const vector<int> &arr, int r)
{
    vector<int> current(r);
    generateCombinations(arr, r, 0, current, 0);
}

// Main function
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int r = 2;

    // cout << "Combinations of size " << r << ":\n";
    // printAllCombinations(arr, r);

    cout << "\nCombinations of size 3:\n";
    printAllCombinations(arr, 3);

    return 0;
}