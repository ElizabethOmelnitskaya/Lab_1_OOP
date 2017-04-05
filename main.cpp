#include "trapezoid.h"
#include<conio.h>
#include <iostream>

using namespace std;

const int q = 3;
Trapezoid trapec[q];
Trapezoid t;


int menu()
{
	cout << "\n What do you want to do with it? \n";
	cout << "\n 1 : Create and fill trapezoid array \n";
	cout << " 2 : Print a trapezoid \n";
	cout << " 3 : Resize to the specified number of times \n";
	cout << " 4 : Calculate perimeter of a trapezoid \n";
	cout << " 5 : Calculate area of a trapezoid \n";
	cout << " 6 : Calculate height of a trapezoid \n";
	cout << " 7 : Calculate MidLine of a trapezoid \n";
	cout << " 8 : Calculate similarity trapezoids \n";
	cout << " 0 : Exit \n";
	return 0;
}
void Trapezoid::initialize(){
	for (int k = 0; k < q; k++) {
		cout << "Side1: "; cin >> trapec[k].side1;
		cout << "Side2: "; cin >> trapec[k].side2;
		cout << "Base1: "; cin >> trapec[k].base1;
		cout << "Base2: "; cin >> trapec[k].base2;
		cout << endl;
	}
}
void Trapezoid::print(){
	int k;
	cout << "Print trapec #: ";
	cin >> k;
	k = k - 1;
	cout << "Side1 is: " << trapec[k].side1 << "\n";
	cout << "Side2 is: " << trapec[k].side2 << "\n";
	cout << "Base1 is: " << trapec[k].base1 << "\n";
	cout << "Base2 is: " << trapec[k].base2 << "\n";
}
int main()
{
	int ans;
	double midLine, h, per, area, times;
	bool Ans;
	do
	{
		menu();
		cout << " Enter you choice\n";
		cin.clear();
		_flushall();
		cin >> (ans);
		int k = 0, j = 0;
		switch (ans)
		{
		case 1:
			t.initialize();
			break;
		case 2:
			t.print();
			break;
		case 3:
			cout << "Change trapec #: ";
			cin >> k;
			k = k - 1;
			cout << "By how much would you like to change your trapec?";
			cin >> times;
			trapec[k].changeSize(times);
			break;
		case 4:
			cout << "Calculate perimeter of trapec #: ";
			cin >> k;
			k = k - 1;
			per = trapec[k].Per();
			cout << "Perimeter of " << k + 1 << " trapec is: " << per << endl;
			break;
		case 5:
			cout << "Calculate area of trapec #: ";
			cin >> k;
			k = k - 1;
			area = trapec[k].Area();
			cout << "Area of " << k + 1 << " trapec is: " << area << endl;
			break;
		case 6:
			cout << "Calculate height of trapec #: ";
			cin >> k;
			k = k - 1;
			h = trapec[k].height();
			cout << "Height of " << k + 1 << " trapec is: " << h << endl;
			break;
		case 7:
			cout << "Calculate MidLine of trapec #: ";
			cin >> k;
			k = k - 1;
			midLine = trapec[k].midline();
			cout << "MidLine of " << k + 1 << " trapec is: " << midLine << endl;
			break;
		case 8:
			cout << "Firs trapec # is: ";
			cin >> k;
			k = k - 1;
			cout << "Second trapec # is: ";
			cin >> j;
			j = j - 1;
			Ans = trapec[k].simplesimilarity(trapec[j]);
			if (Ans == true)
			{
				printf("\n**Similarity**");
				_getch();
			}
			else if (Ans == false){
				printf("\n!!!NOT similarity!!!!!!");
				_getch();
			}

			break;
		}
	} while (ans != 0);
	system("pause");
	return 0;
}