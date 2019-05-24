//Chapter 7 Programming Challenge 1
//Largest/Smallest Array Values
//Write a program that lets the user enter ten values into an array. 
//The program should then display the largest and smallest values in the array

#include <iostream>
using namespace std;

int* createArray(int[], int);
void smallest(int[], int);
void biggest(int[], int);


int main()
{
	const int size = 10;
	int array[size];

	createArray(array, size);
	biggest(array, size);
	smallest(array, size);

}

int* createArray(int func[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter a number to add to the array:";
		cin >> func[i];
	}
	return func;
}

void biggest(int func3[], int size)
{
	int biggest = func3[0];

	for (int u = 0; u < 10; u++)
	{
		if (biggest < func3[u])
		{
			biggest = func3[u];
		}
	}

	cout << "The largest value is " << biggest << endl;
}


void smallest(int func2[], int size)
{
	int smallest = func2[0];

	for (int k = 0; k < 10; k++)
	{
		if (smallest > func2[k])
		{
			smallest = func2[k];
		}
	}

	cout << "The smallest value is " << smallest << endl;
}