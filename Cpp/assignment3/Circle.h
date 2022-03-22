#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <string>

using namespace std;

class Circle
{
  private:
	unsigned radius;
	string name;

  public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

#endif