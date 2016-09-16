// Armin Fazlic 
// program 1 
// 09/12/16

#include <iostream> 
#include <string>
using namespace std;
int main () 
{
string name;
float hourly_wage;
float hours_week;
cout << "please enter your name" << endl;
cin >> name;
cout << "please enter your hourly wage" << endl;
cin >> hourly_wage;
cout << "please enter how many hours you worked in a given week" << endl;
cin >> hours_week;
cout << name << endl;
cout << "based on your hourly wage of $" << hourly_wage << " and your weekly hours worked of " << hours_week << endl;
cout << "your weekly wage is $" << hourly_wage * hours_week << " before taxes " << endl;
cout << "your weekly wage after a 17% tax is $" << hourly_wage * hours_week - hourly_wage * hours_week * 0.17  << endl;

return 0;
}





