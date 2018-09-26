#include <iostream>
#include "Computer.h"
using namespace std;

int main()
{
	Computer c{};
	cout << "Risultato: " << c.computeSum(1, 2);
	return 0;
}