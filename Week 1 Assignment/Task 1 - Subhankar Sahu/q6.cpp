#include <iostream>
using namespace std;

int main()
 {
    int n,i,j,k;
    cout << "Enter n: ";
    cin >> n;

    // First line: 1 to n
    for (i = 1; i <= n; i++) 
    {
        for (j=1; j<= n ;j++)
        {
            for (k=1;k<=i;k++)
            {
                cout << j;
    }
}
cout << endl;
        }
            return 0;
}
