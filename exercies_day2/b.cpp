#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxh = 0;
    for (int x : arr)
        if (x > maxh)
            maxh = x;

    // Calculate centers
    vector<int> center(n);
    int spacing = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            center[i] = arr[i] - 1;
        else
            center[i] = center[i - 1] + arr[i - 1] * 2 + 1; // add gap
    }

    // Draw pyramids
    for (int row = 0; row < maxh; row++) {
        for (int i = 0; i < n; i++) {
            int height = arr[i];
            int baseWidth = 2 * height - 1;
            int spaces = height - row - 1;

            // Compute position of this pyramid’s start
            int leftPadding = center[i] - (height - 1);

            // Draw spaces up to start of this pyramid
            if (i == 0)
                cout << string(leftPadding, ' ');
            else {
                int prevEnd = center[i - 1] + (arr[i - 1] - 1);
                cout << string(leftPadding - prevEnd - 1, ' ');
            }

            // Draw the pyramid row if it's within height
            if (row < height)
                cout << string(baseWidth - 2 * spaces, 'x');
        }
        cout << '\n';
    }
    return 0;
}
