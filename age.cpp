#include <iostream>
using namespace std;

int main()
{
    cout << "\n=====================================\n";
    cout << "\n======== Your Age In program ========\n";
    cout << "\n=====================================\n";
    int age;
    cout << "what is your age?: "; 
    cin >> age;
    cout << "\nyour age in years is : " << age << " Years";
    int yourAgeInDays = age * 365;
    cout << "\nyour age in days is : " << yourAgeInDays << " Days.";
    int yourAgeInHours = yourAgeInDays * 24;
    cout << "\nyour age in hours is : " << yourAgeInHours << " h";
    int yourAgeInMinutes = yourAgeInHours * 60;
    cout << "\nyour age in minutes is : " << yourAgeInMinutes << " m";
    int yourAgeInSeconds = yourAgeInMinutes * 60;
    cout << "\nyour age in seconda is : " << yourAgeInSeconds << " s"; 
    cout << "\n\n============== @Y0U$EF ==============\n";
    cout << "\n=====================================\n\n\n";
  




    return 0; 
}
