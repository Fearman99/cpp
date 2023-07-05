#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int arr2[7];
    int k;
    cin >> k;
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
            arr2[j++] = arr[i];
    }

    for (int i = 0; i < n - k; i++)
    {
            arr2[j++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}
  

