#ifndef __RAM_H__
#define __RAM_H__

class Ram {
    char mem[100*1024];

    int size;
public:
    Ram();
    ~Ram();
    char read(int adress);
    void write(int address, char value);

};

#endif