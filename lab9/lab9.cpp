//Armin Fazlic
//Kelvin C and Fahrenheit
//10/8/16


#include <iostream> 
#include <sstream>
#include <string>

using namespace std;

class TemperatureConverter {
    
    private:
    float Kelvin_;
    
    public:
    
    TemperatureConverter(){
        Kelvin_ = 0;
    }
    TemperatureConverter(float a){
        Kelvin_ = a;
        
    
    }
    

    
    void SetTempFromKelvin (float new_Kelvin_){
        Kelvin_ = new_Kelvin_;
    }
    
    float GetTempFromKelvin(){
        return Kelvin_;
    }
    
    void SetTempFromCelsius(float celcius){
        Kelvin_ = celcius + 273.15;
    }
    
    void SetTempFromFahrenheit(float a){
        
        Kelvin_ = (5 * (a -32)/9) + 273.15;
    }
    
    float GetTempAsCelsius(){
        return GetTempFromKelvin() - 273.15;
    }
    
    float GetTempAsFahrenheit(){
        return ((GetTempAsCelsius()*9)/5 + 32);
    }
    
    
    
    void PrintTemperatures (){
        float kelvin = GetTempFromKelvin();
        float celcius = GetTempAsCelsius();
        float fahrenheit = GetTempAsFahrenheit();
        
        cout << kelvin << " Kelvin," << celcius <<" Celcius," << fahrenheit << " Fahrenheit." << endl;
    }
    };
    
    
    /* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
};
     



/*SetTempFromCelsius – accepts a Celsius value and converts it to kelvin Formula: k=c + 273.15
SetTempFromFahrenheit – accepts a Fahrenheit value and converts it to kelvin Formula: k = (5 * (f -32)/9) + 273.15
GetTempAsCelsius – returns the Celsius temperature. Formula: k – 273.15
GetTempAsFahrenheit – returns the Fahrenheit temperature. Formula: ((c*9)/5 + 32)
PrintTemperatures – prints the value as kelvin, Celsius and Fahrenheit by using the other functions available.*/
