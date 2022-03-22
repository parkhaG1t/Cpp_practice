#ifndef __BOX_H__
#define __BOX_H__

class Box {
    int width, height;
    char fill;
public:
    Box(int w, int h);
    void setFill(char f);
    void setSize(int w, int h);
    void draw(void);

};

#endif