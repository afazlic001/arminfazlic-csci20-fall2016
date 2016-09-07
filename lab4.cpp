//coin machine
// Armin Fazlic
// 08/31/16
// 

#include <iostream> 
using namespace std;

int main ()
{
cout << " Hello! thank you for using Armin's Coin machine " << endl;
cout << " please enter your coin quantity in cents " << endl;

int cents;
cin >> cents;

int quarter; 
quarter = 25;

int dime;
dime = 10;

int nickel;
nickel = 5;

int penny;
penny = 1;
int tquarter;
int quarter_remainder;
int tdime;
int dime_remainder;
int tnickel;
int nickel_remainder;
int tpenny;

tquarter = cents / quarter; 
quarter_remainder = cents % quarter;

tdime = quarter_remainder / dime;
dime_remainder = quarter_remainder % dime;

tnickel = dime_remainder / nickel;
nickel_remainder = dime_remainder % nickel;

tpenny = nickel_remainder;


cout << "you have entered " << cents << "cents." << endl;
cout <<  tquarter  <<  " quarters "  <<  tdime    <<  " dimes "  <<   tnickel   <<  " nickels "  <<   tpenny   <<  " pennys "  << endl;
int dollars;
int tcents;

dollars = cents / 100;
tcents = cents % 100;

float tax;
tax = cents *.109;

float tax_dollars;
tax_dollars = cents - tax;








cout << "the total is " << dollars << " dollars and " << tcents << " cents " << endl;
cout << "after the fee you get $" << tax_dollars / 100 << endl;








system("PAUSE");
return 0;
}