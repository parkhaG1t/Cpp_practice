#include <iostream>
using namespace std;

#include "box.h"

Box::Box(int w, int h) { setSize(w,h); fill='*'; }

void Box::setFill(char f) { fill = f; }

void Box::setSize(int w, int h) { width=w; height=h; }

void Box::draw(void)
{
    for (int n = 0; n<height; ++n){
        for (int m = 0; m<width; ++m) {
            cout << fill;
        }
        cout << endl;
    }

    return;
}



