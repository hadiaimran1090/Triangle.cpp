#include<iostream>
using namespace std;
int main() {
	int row;
	int n = 1;
	cout << "enter row number : ";
	cin >> row;
	// **pointer to pointer  //Allocating dynamic memory(fo rpointer  array of row) to pointer
	int** mat = new int*[row];
	//Allocating dynamic memory(for array of col) to each row 
	for (int i = 0; i < row; i++) {
		mat[i] = new int[row + 1];
	}
	// intialize
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			mat[i][j] =n++;
		}
		n = 1;
	}
	// display
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			cout<< mat[i][j]<<" ";
		}
		cout << endl;
	}
	//dellocate memory
	for (int i = 0; i < row; i++) {
		if(mat[i]!=nullptr)
		delete[] mat[i];
	}
	if(mat!=nullptr)
	delete[] mat;
}