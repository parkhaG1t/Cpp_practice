#include "box.h"



int main(void) {
    Box b(10,2);
    b.draw();

    b.setSize(7,4);
    b.setFill('^');
    b.draw();

    return 0;
}