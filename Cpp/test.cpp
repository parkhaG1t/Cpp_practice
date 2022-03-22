//MyStack.h

/*




#include <iostream>

class Mystack {
    int *p;
    int max_size;
    public:
    Mystack(int max_size){
        this->max_size = max_size;
        p = new int [max_size];


    }
    bool Push(int const& n) {

    }
    bool Pop(int* const n) {

    }
}
*/

#include <iostream>

using namespace std;

int main() {
    int *p = new int [20];
    p[1] = 20;
    cout << "메모리 주소 : " << p << endl;
    cout << "p[] 첫 번째 값 : " << p[1] << endl;
    cout << "*p 첫 번째 값 : " << *p << endl;
    cout << "&p 첫 번째 값 : " << &p << endl;

    p[2] = 30;
    *p++;
    cout << "p + 1 값 : " << p << endl;

}