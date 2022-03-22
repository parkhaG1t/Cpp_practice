#include <iostream>
#include "MyStack.h"


using namespace std;

// MyStack.cpp
explicit Mystack::Mystack(int max_size){
    this->max_size = max_size;
    this->top = 0;
    p = new int [max_size];
}

bool Mystack::Push(const int& n){
    if (top != max_size) {
        p[top] = n;
        top++;
        return true;
    } else {
        return false; 
    }
}

bool Mystack::Pop(int* const n) {
    if (top != 0) {
        top_idx = p[top];
        top--;
        return true;
    } else {
        return false;
    }
    
}

Mystack::Mystack(const Mystack& my_stack) {
    this->top = my_stack.top;
    this->top_idx = my_stack.top_idx;
    this->max_size = my_stack.max_size;
    cout << "복사 생성자 실행" << endl;
}

Mystack::~Mystack() { delete[] p; };


