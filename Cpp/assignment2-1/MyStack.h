//MyStack.h
#ifndef HW02_01_MY_STACK
#define HW02_01_MY_STACK



class Mystack {
    int *p;
    int max_size;
    int top_idx;
    int top;
   public:
    explicit Mystack(int max_size);
    Mystack(const Mystack& my_stack);
    ~Mystack();
    bool Push(const int& n);
    bool Pop(int* const n);
    
};

#endif