/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: IMS
 * @app desc: 
 *  (Read README.MD)
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char c; //TODO: delete this line
  const int MAXINPUT = 20, STOCKLIMIT=99999;
  pair<string, int> items[4] = {
    {"Apples", 10},
    {"Bananas", 20},
    {"Oranges", 15},
    {"Grapes", 5},
  };
  /* Print Heading */
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // top border
  cout << setfill(' ') << "|\033[1m" << left << setw(MAXINPUT+2) << " ITEMS" << "\033[0m|" << setw(7) << " STOCK" << "|" << endl; // content
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // bottom border of the header
  
  /* Print table rows */
  cout << left << setfill(' ');

  for(auto& i: items)
    cout << "| " << setw(MAXINPUT) << i.first << " | " << setw(5) << i.second << " |" << endl; // row
  
  /* Print bottom border of the table */
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // bottom border of the header

  //TODO: delete the lines after this
  cout << "Press any key to exit";
  cin >> c;
  cin.ignore();
  return EXIT_SUCCESS;
}
