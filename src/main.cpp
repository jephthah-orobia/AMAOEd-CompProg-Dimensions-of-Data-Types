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

  /* Print Heading */
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // top border
  cout << setfill(' ') << "|\033[1m" << left << setw(MAXINPUT+2) << " ITEMS" << "\033[0m|" << setw(7) << " STOCK" << "|" << endl; // content
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // bottom border of the header
  
  /* Print table rows */
  cout << left << setfill(' ');
  cout << "| " << left << setw(MAXINPUT) << "Apples" << " | " << setw(5) << "10" << " |" << endl; // row
  cout << "| " << left << setw(MAXINPUT) << "Bananas" << " | " << setw(5) << "20" << " |" << endl; // row
  cout << "| " << left << setw(MAXINPUT) << "Oranges" << " | " << setw(5) << "15" << " |" << endl; // row
  cout << "| " << left << setw(MAXINPUT) << "Grapes" << " | " << setw(5) << "5" << " |" << endl; // row
  
  /* Print bottom border of the table */
  cout << right << setfill('-') << "+" << setw(MAXINPUT+3) << "+" << setw(8) << "+" << endl; // bottom border of the header

  //TODO: delete the lines after this
  cout << "Press any key to exit";
  cin >> c;
  cin.ignore();
  return EXIT_SUCCESS;
}
