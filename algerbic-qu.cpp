// C++ implementation to count pairs from two 
// sorted matrices whose sum is equal to a 
// given value x 
#include <bits/stdc++.h> 

using namespace std; 

#define SIZE 10 

// function to count pairs from two sorted matrices 
// whose sum is equal to a given value x 
int countPairs(int mat1[][SIZE], int mat2[][SIZE], 
			int n, int x) 
{ 
	int count = 0; 

	// unordered_set 'us' implemented as hash table 
int unordered_set<int> us; 

	// insert all the elements of mat2[][] in 'us' 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			us.insert(mat2[i][j]); 

	// for each element of mat1[][] 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 

			// if (x-mat1[i][j]) is in 'us' 
			if (us.find(x - mat1[i][j]) != us.end()) 
				count++; 

	// required count of pairs 
	return count; 
} 

// Driver program to test above 
int main() 
{ 
	int mat1[][SIZE]; 

	int mat2[][SIZE]; 
	cin>>mat1[][SIZE]>>endl;
	cin>>mat2[][SIZE]>>endl;

	int n = 3; 
	int x = 21; 

	cout << "Count = "
		<< countPairs(mat1, mat2, n, x); 

	return 0; 
} 

