#ifndef __CIRCLEMANAGER_H__
#define __CIRCLEMANAGER_H__

#include "Circle.h"

class CircleManager
{
  private:
	Circle *circles;
	size_t size;

  public:
	CircleManager(size_t size);
	~CircleManager();

	void searchByName();
	void searchByArea();
};

#endif