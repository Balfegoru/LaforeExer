#include <iostream>

using namespace std;

struct phone
    {
        int city;
        int station;
        int abonent;
    };

int main()
{
    phone yourphone;
    yourphone.city = 212;
    yourphone.station = 767;
    yourphone.abonent = 8900;
  
    phone myphone;
    
    cout << "Insert phone city, station, abonent" << endl;
  cin >> myphone.city >> myphone.station >> myphone.abonent;
  
  
    cout << "My phone (" << myphone.city << ") " << myphone.station << "-" << myphone.abonent << endl;
    cout << "Your phone (" << yourphone.city << ") " << yourphone.station << "-" << yourphone.abonent;
    return 0;
}
