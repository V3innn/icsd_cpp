#include <iostream>
using namespace std;

class Karta
{
    string id;
    string fullname;
    float limit;
    float credit;

public:

    void setvalues(string idp,string fullnamep,float limitp)
    {
        id=idp;
        fullname=fullnamep;
        limit=limitp;
        credit=0.0;
    }

    bool charge(float amount)
    {
        if((credit+amount)<=limit){
            credit+=amount;
        return true;
    }
        return false;
    }

    void refund(float amount)
    {
        credit-=amount;
    }

    float getgredit()
    {
        return credit;
    }
};


int main()
{
    Karta card;
    card.setvalues("It's V3in","1234567890",500);
    card.charge(250);
    card.refund(150);
    card.charge(100);
    
    cout<<"xreothike: "<<card.getgredit()<<endl;

    return 0;
}
