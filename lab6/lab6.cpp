//1.6
// Armin Fazlic
// 09/14/16
// 

#include <iostream> 
using namespace std;
int close()
{
cout << "*******" << endl;
cout << " *******" << endl;
cout << "  *******" << endl;
cout << " copyright Armin Fazlic" << endl;
return 0;


}
using namespace std;

struct monster {
    string name;
    string head; 
    string eyes;
    string nose;
    string mouth;
    string ears;
    
} monster1, monster2, monster3, monster4;

int main (){
cout << "welcome to interactive monster maker" << endl;
cout << " please enter the name of your monster" << endl;
cin >> monster1.name;
cout << monster1.name << endl;
cout << "please enter which animal your monsters head is from" <<endl;
cin >> monster1.head;
cout << "please enter which animal your monsters eyes are from" << endl;
cin >> monster1.eyes;
cout << "please enter which animal your monsters nose is from" << endl;
cin >> monster1.nose; 
cout << " please enter which animal your monsters mouth is from" << endl;
cin >> monster1.mouth;
cout << "please enter which animal your monsters ears are from" << endl;
cin >> monster1.ears;
cout << "your monster: " << monster1.name << " head of: " << monster1.head << " eyes of : " << monster1.eyes << " nose of: " << monster1.nose << " mouth of: " << monster1.mouth << " ears of: " << monster1.ears << endl;

monster2.name = "onemonster";
monster2.head = "zombus";
monster2.eyes = "spiritem";
monster2.nose = "vegitas";
monster2.mouth = "none";
monster2.ears = "wackus";

cout << "monster2 : " << monster2.name << " head of: " << monster2.head << " eyes of : " << monster2.eyes << " nose of: " << monster2.nose << " mouth of: " << monster2.mouth << " ears of: " << monster2.ears << endl;

monster3.name = "giga";
monster3.head = "raptor";
monster3.eyes = "mosa";
monster3.nose = "dodo";
monster3.mouth = "rex";
monster3.ears = "pteranadon";

cout << "monster3 : " << monster3.name << " head of: " << monster3.head << " eyes of : " << monster3.eyes << " nose of: " << monster3.nose << " mouth of: " << monster3.mouth << " ears of: " << monster3.ears << endl;

monster4.name = "alpha";
monster4.head = "argentavis";
monster4.eyes = "quetzal";
monster4.nose = "carno";
monster4.mouth = "vulture";
monster4.ears = "manti";
cout << "monster4: " << monster4.name << " head of: " << monster4.head << " eyes of : " << monster4.eyes << " nose of: " << monster4.nose << " mouth of: " << monster4.mouth << " ears of: " << monster4.ears << endl;
 
close();
return 0;


}
