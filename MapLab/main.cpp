#include <iostream>
#include <string>
#include "Map.h"
using namespace std;
int main()
{
	Map map = Map("Home");

	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose an option" << endl;
		cout << "0) exit" << endl;
		cout << "1) Get Current location" << endl;
		cout << "2)Go North" << endl;
		system("pause");
	}
	return 0;
}