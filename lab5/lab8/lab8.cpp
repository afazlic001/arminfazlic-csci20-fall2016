// armin fazlic
// 09/21/16
//Kilo to lb, lb to kilo
//converts betweem kilos and lbs 

# include <iostream>
using namespace std;

   float kilo;
   float pounds;
   
    
  float getPound(){ //takes user input and sends to kilo conversion function 
   int x;
    cout << "Please enter amount of pounds to conver to Kilograms" << endl;
    cin >> x;
    return x;
  }
    
  float ToKilo(float a){ //receives var from getpound, converts to kilograms 
    
    
   
    float y = a * 2.2;
    cout << a << " pounds equals " << y << " Kilograms" << endl;
    return y;
    
    
  }  
    
  float getKilo(){ // user imput of kilograms sends var to pound conversion function
    int x;
    cout << "Please enter amount of Kilograms to convert to Pounds" << endl;
    cin >> x;
    return x;
    
  }
    
  int ToPounds(float b){ // recievesvariable from getkilo and convert to pounds
    float z = b / 2.2 ;
    cout << b << " Kilograms equals " << z << " Pounds" << endl;
    
  }  
    
    
  int main (){
    
    ToKilo(getPound());
    ToPounds(getKilo());
    
    
    
    
    
  }
