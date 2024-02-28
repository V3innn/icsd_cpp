#include <iostream>
using namespace std;

class sxima
{
    string color;
public:
    void set_col(string c)
    {
        color = c;
    }
    void show()
    {
        cout << "Sxima xrwmatos " << color << endl;
    }
};
class kyklos: public sxima
{
    float aktina;
public:
    void set_r(float r)
    {
        aktina = r;
    }
    void show()
    {
        cout << "Kyklos aktinas " << aktina << endl;
        sxima::show();
    }
};
class tetragono : public sxima
{
    float plevra;
public:
    void set_a(float a)
    {
        plevra = a;
    }
    void show()
    {
        cout << "Tetragwno plevras " << plevra << endl;
        sxima::show();
    }
};
int main()
{
    kyklos k1;
    tetragono t1;
    sxima *ptr1 = &t1;
    t1.set_a(10);
    t1.set_col("Kokkino");
    t1.show();
    k1.set_r(5);
    k1.set_col("Mple");
    k1.show();
    cout << endl << "Call using pointer" << endl << endl;
    ptr1->show();
    ptr1 = &k1;
    ptr1->show();
    return 0;
}
