#include <iostream>
#include <algorithm>
using namespace std;

int assemblyLineScheduling(int n, int a1[], int a2[], int t1[], int t2[], int e1, int e2, int x1, int x2) {
    int T1[n], T2[n];

    // Base cases: time to leave the first station
    T1[0] = e1 + a1[0];
    T2[0] = e2 + a2[0];

    // Fill the tables T1[] and T2[] for all stations
    for (int i = 1; i < n; i++) {
        T1[i] = min(T1[i-1] + a1[i], T2[i-1] + t2[i-1] + a1[i]);
        T2[i] = min(T2[i-1] + a2[i], T1[i-1] + t1[i-1] + a2[i]);
    }

    // Consider the exit times and return the minimum of the two possibilities
    return min(T1[n-1] + x1, T2[n-1] + x2);
}

int main() {
    int n = 4;
    int a1[] = {4, 5, 3, 2};  // Processing times for line 1
    int a2[] = {2, 10, 1, 4}; // Processing times for line 2
    int t1[] = {0, 7, 4, 5};  // Transfer times from line 2 to line 1
    int t2[] = {0, 9, 2, 8};  // Transfer times from line 1 to line 2
    int e1 = 10, e2 = 12;     // Entry times for lines 1 and 2
    int x1 = 18, x2 = 7;      // Exit times for lines 1 and 2

    cout << "Minimum time to complete assembly: " << assemblyLineScheduling(n, a1, a2, t1, t2, e1, e2, x1, x2) << endl;

    return 0;
}
