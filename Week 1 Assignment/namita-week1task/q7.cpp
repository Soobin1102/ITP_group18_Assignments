#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int c=1;
    for (int i = 1;i<=n; i++) {
        for (int j = 1; j<=n; j++) {
            printf("%d*",c);
            c++;
            cout << j;
    }
        cout << endl;
    }
}
