#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> frequencySort(vector<int>& arr) {
    unordered_map<int, int> frequency;
    for (int num : arr) {
        frequency[num]++;
    }

    // Step 2: Sort the array based on frequency and then by value
    sort(arr.begin(), arr.end(), [&frequency](int a, int b) {
        // If frequencies are different, sort by frequency in descending order
        if (frequency[a] != frequency[b])
            return frequency[a] > frequency[b];
        // If frequencies are the same, sort by value in ascending order
        return a < b;
    });

    return arr;
}

int main() {
    vector<int> arr = {4, 5, 6, 5, 4, 3};
    
    // Get the sorted array
    vector<int> sortedArr = frequencySort(arr);

    // Print the sorted array
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
