#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan()  // hapus final
    {
        cout << "hello saya Function dari base class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() override  // override boleh sekarang
    {
        cout << "hello saya function dari derived class";
    }
};