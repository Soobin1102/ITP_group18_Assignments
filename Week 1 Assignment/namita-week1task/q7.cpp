#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int num = 1; 

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < rows; j++) { 
            cout << num;
            if (j < rows - 1) { 
                cout << "*";
            }
            num++;
        }
        cout << endl; 
    }

    return 0;
}
