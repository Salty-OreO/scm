#include <iostream>
using namespace std;
int main()
{
    int n, x, ans;
    cout << "Enter the size of array: ";
    cin >> n;// we are taking input
    cout << "Enter the sum :";
    cin >> x;
    int arr[n];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n)
        {
            if ((arr[i] + arr[j] == x))
            {
                ans = ans + 1;
            }
            j++;
        }
    }
    cout << "The number of pair whose addition results  " << x << "are :" << ans;

    return 0;
}
