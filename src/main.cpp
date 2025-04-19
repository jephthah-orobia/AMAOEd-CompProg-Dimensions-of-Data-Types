/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: Temperature Monitoring System
 * @app desc:
 *  -Create a console application to record and analyze temperature readings for a week.
 *  -Prompt user to enter temperature from day 1 to day 7 storing them in an array.
 *  -Calculate the average, max and min.
 *  -Display the result.
 *  -Assume all user’s input is valid.
 *  -Exit the app when user press any key.
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main()
{
  float ts[7], sum, min, max;
  
  cout << fixed << setprecision(2) << "\033[1mTemperature Monitoring System\033[0m" << endl << endl;

  for(int d=1; d<=7; d++){
    cout << "Day " << d << ": ";
    cin >> ts[d-1];
  }

  min=ts[0];
  
  cout << endl;

  /* Calculate sum, min, max */
  for(auto& t: ts){
    sum += t;
    if(t < min)
      min = t;
    if(t > max)
      max = t;
  }

  cout << "**** RESULT ****" << endl;
  cout << "---> AVERAGE: " << sum/7 << endl; 
  cout << "---> MINIMUM: " << min << endl; 
  cout << "---> MAXIMUM: " << max << endl; 

  cout << endl;
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  cin.ignore();
  return EXIT_SUCCESS;
}
