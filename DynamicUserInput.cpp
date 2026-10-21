#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int trans[3][3];

    // --- FEATURE ADDED: User Input ---
    cout << "Enter the 9 elements for the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // ---------------------------------

    cout << "\nThe original array is:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Computing the transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << "\nThe transpose of the array is:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}