
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[x] Prompt the user to input five numbers.
		[x] Store the input into either an array or a vector.
		[x] Once the user is finished entering numbers:
			[x] Display the five numbers in reverse order.
			[x] Display the highest number entered.
			[x] Display the lowest number entered.
		[x] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[x] Compress(zip) your program and submit it to Blackboard.
*/

#include <vector>
#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	vector<int> arr;
	int size = sizeof(arr) / sizeof(int);
	int x;

	char result;


	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number: ";
		cin >> x;
		arr.push_back(x);
		//arr[i] = x;

	}

	
	do {
		cout << "do you want to add another number? y/n: ";
		cin >> result;
		if (result == 'y' || result == 'Y')
		{
			cout << "Enter a number: ";
			cin >> x;
			arr.push_back(x);
			size++;
		}
		
	} while (result == 'y' || result == 'Y');

	int index = size;
	cout << size << endl;
	for (int i = 0; i <= size ; i++)
	{
		
		cout << arr[index] << ", ";
		index--;
	}

	cout << endl;

	int max = 0;
	for (int i = 0; i <= size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Highest number is: " << max << endl;
	int min = max;
	for (int i = 0; i <= size; i++)
	{

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Lowest number is: " << min;

	_getch();
	return 0;
}
