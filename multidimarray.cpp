#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << arr[1][2] << endl;

    std::string details[][4] = {
        {"John Doe", "1234", "12-12-1990", "1234"},
        {"Jane Doe", "5678", "12-12-1991", "5678"},
        {"Jim Doe", "9101", "12-12-1992", "9101"}
    };

    int rows = sizeof(details) / sizeof(details[0]);
    int cols = sizeof(details[0]) / sizeof(details[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << details[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}