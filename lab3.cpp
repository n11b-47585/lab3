#include "pch.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int size=20;
	cout << "Wylosowane liczby to: ";
	int tab[size];
	
	for (int i = 0; i<size; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i]<<" ";

	}
	cout << endl << endl;
	cout <<"Sortowanie wylosowanych liczb: ";

	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(tab[j], tab[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " ";
	}

	int min = tab[0];
	for (int i = 0; i < size; i++)
		if (min > tab[i])
			min = tab[i];
	cout << endl << endl;
	cout <<endl<<"Najmniejsza liczba w zbiorze to: "<< min;
	cout << endl << endl;
	int max = tab[0];
	for (int i = 0; i < size; i++)
		if (max < tab[i])
			max = tab[i];
	cout << endl << "Najwieksza liczba w zbiorze to: " << max;

	cout << endl << endl;

	float tmp=0;
	for (int i = 0; i < size; i++)
	{
		tmp += tab[i];
	}
	float avg = tmp / size;
	
	cout<<"Srednia wartosc arytmetyczna: " << avg;
	cout << endl << endl;
	cout << endl << endl;
	return 0;
}
