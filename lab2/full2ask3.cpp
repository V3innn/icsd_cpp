#include <iostream>
#include <string>
using namespace std;

class Temperature{
private:
    double KelvinTemp;

public:
    void setTempKelvin(double temperature);
    void setTempFahrenheit(double temperature);
    void setTempCelcius(double temperature);
    void displayResult();
};

void Temperature::setTempKelvin(double temperature){
KelvinTemp=temperature;
}

void Temperature::setTempFahrenheit(double temperature){
    double Celsius=(5.0/9)*(temperature-32);
    setTempCelcius(Celsius);
}

void Temperature::setTempCelcius(double temperature){
    KelvinTemp=temperature+273.15;
}

void Temperature::displayResult(){
cout <<"The temperature into Kelvin is: " << KelvinTemp << endl;
}

int main(){
    Temperature temp;
    temp.setTempCelcius(59.3);
    temp.displayResult();

    temp.setTempFahrenheit(65);
    temp.displayResult();

    //cout << endl;
    return 0;
}
