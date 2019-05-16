#include "Array.h"
#include <iostream>
using namespace std;
#define MAX 5

int main()
{
	char c[] = "sdfsdfsdfsdafsadfsdf";
	double f[] = { 1.0, 2.5 ,3.4, 4.7,5.1 };
	int a[] = {1,2,3,4,5};
	Array<int> Newarray;
	Newarray.SetArr(a);
	cout << Newarray.GetArr(0) << endl;
	cout << Newarray.Contrlsum() << endl;	
	Array<double> Newarray1;
	Newarray1.SetArr(f);	
	cout << Newarray1.Contrlsum() << endl;
	cout << Newarray1.GetArr(1) << endl;
	Array<char> Newarray2;
	Newarray2.SetArr(c);
	cout << Newarray2.GetArr(0) << endl;
	cout << Newarray2.Contrlsum() << endl;
	cout << Newarray2.GetArr(1) << endl;
	system("pause");
	return 0;
}