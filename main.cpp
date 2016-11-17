#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int month, day, year;
   
   cout << "What is the date in MM/DD/YYYY format? (Including '/'s)" <<endl;
   cin >> month;
   cin.ignore(1); //used to get rid of the "/"s
   cin >> day; 
   cin.ignore(1); //used to get rid of the "/"s
   cin >> year;
   
   //cout << month << day << year;
   
   
   if (month == 1 && day <=31 || month == 3 && day <=31 || month == 5 && day <=31 || month == 7 && day <=31 || month == 8 && day <=31 || month == 10 && day <=31 || month == 12 && day <=31)
         cout << "Valid Date!" <<endl;
   else if (month == 4 && day <=30 || month == 6 && day <=30 || month == 9 && day <=30 || month == 11 && day <=30)
        cout << "Valid Date!" <<endl;
   else if (month == 2)
      {
                 if (year % 4 ==0 && day <= 29)
                    cout << "Valid Date!" <<endl;
                 else if (day <= 28)
                      cout << "Valid Date!" <<endl;
                 else if (year % 4 != 0 && day <=29)
                      cout << "Not a Valid Date!" <<endl;
             
        }     
   else
        cout << "Not a Valid Date!" <<endl;

   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
