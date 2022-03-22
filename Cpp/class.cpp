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
    Circle* p;
    int size;
public:
    CircleManager(int size);

    ~CircleManager();
    void searchByName();
    void searchByArea();
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
    int radius[size];
    this->size = size; 
    Circle *pArr = new Circle[size];
    if(!pArr) {
        cout << "메모리를 할당할 수 없습니다." << endl;
    }
    

    for (c=0; c<size; ++c) {
        cout << "원 " << c+1 << "의 이름과 반지름 >> ";
        

        cin >> name[c];
        cin >> radius[c];
        
        pArr[c].setCircle(name[c], radius[c]);
        
        
    }

    p = pArr;
    delete [] pArr;
    
}
    
CircleManager::~CircleManager() { }

void CircleManager::searchByName() {
    int i, c;
    string name;
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name;
    
    for (i=0; i<size; ++i){
        if((p+i)->getName() == name) {
            c = i;
            break;
        }
    }
    cout << (p+c)->getName() << "의 면적은 " << (p+c)->getArea() << endl;
}

void CircleManager::searchByArea() {
    int area, i, count = 0;
    int loca[size];
    
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;

    cout << area << "보다 큰 원을 검색합니다." << endl;

    for(i=0; i<size; ++i) {
        if ((p+i)->getArea() > area){
            loca[count] = i;
            ++count;
        }
    }

    for(i=0; i<count; ++i) {
        if(i != count -1) {
            cout << (p+loca[i])->getName() << "의 면적은 " << (p+loca[i])->getArea() << ", ";
        } else {
            cout << (p+loca[i])->getName() << "의 면적은 " << (p+loca[i])->getArea();
        }
    }
    
}

int main(void) {
    int size;
    Circle d;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager e(size);
    e.searchByName();
    e.searchByArea();
    e.~CircleManager();
    return 0;
}