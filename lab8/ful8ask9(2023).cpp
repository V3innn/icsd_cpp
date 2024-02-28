#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "To onoma ths classhs einai h A" <<endl ;
    }
};

class B: public A {
public:
    void show() {
      cout << "To onoma ths classhs einai h B" <<endl ;  
    }
};

class D: public B {
public:
    void show() {
        cout << "To onoma ths classhs einai h D" <<endl;
    } 
};

class C: public D {
public:
    void show_C() {
        cout << "To onoma ths classhs einai h C" <<endl;
    }
};

int main(){
    D obj;      //a
    obj.show();

    obj.A::show();  //b
    // or 
    ((B)obj).show();

    

    return 0;
}