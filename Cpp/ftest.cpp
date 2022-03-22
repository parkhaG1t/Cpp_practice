#include <iostream>
#include <string>

using namespace std;

class Circle {
    int radius;
    string name;
public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

class CircleManager {
    Circle *p;
    int size;
public:
    CircleManager(int size);

};

//클래스 선언부





void Circle::setCircle(string name, int radius) { this->name = name; this->radius = radius; }

double Circle::getArea() {
    return radius*radius*3.14;
}

string Circle::getName() {
    return name;
}

CircleManager::CircleManager(int size) {
    int c;
    string name[size];
    int *radius = new int[size];
    this->size = size; 
    Circle *pArr = new Circle[size];
    if(!pArr) {
        cout << "메모리를 할당할 수 없습니다." << endl;
    }
    

    for (c=0; c<size; ++c) {
        cout << "원 " << c+1 << "의 이름과 반지름 >> ";
        

        cin >> name[c];
        cin.ignore();
        cin >> radius[c];
        
        cout << name[c];
        cout << radius[c];
        pArr[c].setCircle(name[c], radius[c]);
        
        
    }

    p = pArr;

    delete [] radius;
}

int main(void){
    Circle b;
    CircleManager d(4);

}