#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
   cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int maxCount = 0;
    int maxElement;
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }
        if (count > maxCount) 
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    cout << "Maximum occurring element: " << maxElement << endl;
    cout << "Occurrences: " << maxCount << endl;
    return 0;
}
