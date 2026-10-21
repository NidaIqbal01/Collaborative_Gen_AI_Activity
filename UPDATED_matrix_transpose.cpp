#include <iostream>
using namespace std;

int main()
{
    // Make dimensions constant so changing the matrix size later requires only one update
    const int ROWS = 3;
    const int COLS = 3;

    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[COLS][ROWS];

    cout << "Original Array:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Calculating transpose: swapping row and column indices
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << "\nThe transpose of array is:\n";
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
