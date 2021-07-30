// Simple C++ program to find k'th smallest element 
#include <algorithm> 
#include <iostream> 
using namespace std; 

// Function to return k'th smallest element in a given array 
 

// Driver program to test above methods 
int main() 
{ 
 	int count,arr[1000],k,i;
	 cin>>count; cin>>k;
	for(i=0;i<count;i++)
    {
        cin>>arr[i];
    } 
	// Sort the given array 
	sort(arr, arr + n); 

	// Return k'th element in the sorted array 

	
	int n = sizeof(arr) / sizeof(arr[0]), k; 
//	cout << kthSmallest(arr, n, k); 
	return arr[k - 1]; 
	return 0; 
} 

