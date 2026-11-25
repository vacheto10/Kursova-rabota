// Kursova rabota.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
double Circlearea(double radius);
double MaxArea(double area[], int n);
int MaxAreaIndex(double area[], int n);

int main()
{
    int n;
    cout << "Broi krugove" << endl;
    cin >> n;
	cout << "n = " << n << endl;
    double radius[100];
    double area[100];
	cout << "Radiusi na krugovete" << endl;
	for (int i = 0; i < n; i++)
    {
		cin >> radius[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Radius " << i + 1 << ": " << radius[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
		area[i] = Circlearea(radius[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Area " << i + 1 << ": " << area[i] << endl;
    }
    
	cout << "Max area: " << MaxAreaIndex(area, n) << " " << MaxArea(area, n) << endl;
	//cout << "Index of max area: " << MaxAreaIndex(area, n) << endl;

}
double Circlearea(double radius)
{
	double result;
	result = 3.14 * radius * radius;
	return result;
}

double MaxArea(double area[], int n)
{
    double max = area[0];
  //  double maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (area[i]>max)
        {
            max = area[i];
		//	maxIndex = i;
        }
    }
    return max;
}
int MaxAreaIndex(double area[], int n)
{
	double max = area[0];
	int maxIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (area[i] > max)
		{
			max = area[i];
			maxIndex = i;
		}
	}
	return maxIndex + 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
