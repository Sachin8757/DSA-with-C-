#include <bits/stdc++.h>
using namespace std;

// Recursive function to count valid arrangements
int countArrangements(int G, int Y, int R, char prev) {
    // Base case: all balls placed
    if (G == 0 && Y == 0 && R == 0) return 1;

    int total = 0;

    // Place Green
    if (G > 0 && prev != 'G') {
        total += countArrangements(G - 1, Y, R, 'G');
    }

    // Place Yellow
    if (Y > 0 && prev != 'Y') {
        total += countArrangements(G, Y - 1, R, 'Y');
    }

    // Place Red
    if (R > 0 && prev != 'R') {
        total += countArrangements(G, Y, R - 1, 'R');
    }

    return total;
}

int main() {
    int G, Y, R;
    cout << "Enter counts for G, Y, R: ";
    cin >> G >> Y >> R;

    int result = countArrangements(G, Y, R, 'N'); // 'N' = None (no previous ball)
    cout << "Number of valid arrangements: " << result << endl;

    return 0;
}