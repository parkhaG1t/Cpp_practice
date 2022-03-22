#include <iostream>
#include <string>



using namespace std;

#include "Circle.h"
#include "CircleManager.h"

int main(void)
{
	unsigned size;

	cout << "원의 개수 >> ";
	cin >> size;

	CircleManager e(size);

	e.searchByName();
	e.searchByArea();

	return 0;
}
