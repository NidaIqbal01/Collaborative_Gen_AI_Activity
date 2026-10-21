#include <iostream>
#include <thread>  // Required for sleep_for
#include <chrono>  // Required for seconds

using namespace std;

int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int trans[3][3];
	
	// Displaying the original array
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	// --- Added for visual improvement ---
	cout << "\nCalculating transpose..." << endl;
	this_thread::sleep_for(chrono::seconds(2)); // Pause for 2 seconds
	// ------------------------------------

	// Transposing the array
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			trans[j][i] = arr[i][j];
		}
	}
	
	cout << "\nThe transpose of array is \n";
	
	// Displaying the transposed array
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