#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 3, 3, 4, 4, 5, 5};
    int x = 4;
    int n = 9;
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + ( high - low ) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid-1]== x)
            {
                high = mid - 1;
            }

            else
            {
                flag = true;
                cout << mid;
                break;
            }
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
    }
    if (flag == false)
        cout << -1;
}