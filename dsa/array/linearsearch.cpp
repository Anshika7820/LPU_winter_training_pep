#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     int pos = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             pos = i;
//         }
//     }
//     cout << pos;
// }



int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            if (key > 5)
            {
                return key * 2;
            }
            else
            {
                return key / 2;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << linearSearch(arr, n, key);
}