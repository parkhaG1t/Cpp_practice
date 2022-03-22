#include <iostream>
#include <string>
using namespace std;
#include "CircleManager.h"




CircleManager::CircleManager(size_t size)
{
	string name;
	unsigned radius;

	this->size = size;

	circles = new Circle[size];

	if (!circles)
	{
		cout << "메모리를 할당할 수 없습니다." << endl;

		return;
	}

	for (size_t i = 0; i < size; ++i)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";

		cin >> name;
		cin >> radius;

		circles[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager()
{
	delete[] circles;
}

void CircleManager::searchByName()
{
	bool isFound = false;
	size_t i;
	string name;

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (i = 0; i < size; ++i)
	{
		if ((circles + i)->getName() == name)
		{
			isFound = true;

			break;
		}
	}

	if (isFound)
	{
		cout << circles[i].getName() << "의 면적은 " << circles[i].getArea()
			 << endl;
	}
	else
	{	
		cout << "not found" << endl;
	}
}

void CircleManager::searchByArea()
{
	unsigned area;
	size_t count = 0;
	size_t *loca = new size_t[size];

	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;

	cout << area << "보다 큰 원을 검색합니다." << endl;

	for (size_t i = 0; i < size; ++i)
	{
		if ((circles + i)->getArea() > area)
		{
			loca[count] = i;

			++count;
		}
	}

	for (size_t i = 0; i < count; ++i)
	{
		if (i + 1 != count)
		{
			cout << (circles + loca[i])->getName() << "의 면적은 "
				 << (circles + loca[i])->getArea() << ", ";
		}
		else
		{
			cout << (circles + loca[i])->getName() << "의 면적은 "
				 << (circles + loca[i])->getArea();
		}
	}

	cout << endl;

	delete[] loca;
}