/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: IMS
 * @app desc: 
 *  (Read README.MD)
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int MAXINPUT = 20, STOCKLIMIT=99999;
  pair<string, int> items[4] = {
    {"Apples", 10},
    {"Bananas", 20},
    {"Oranges", 15},
    {"Grapes", 5},
  };

  while(true){
    system("clear");
    string item;
    int stock;

    /* Display Title */
    cout << "Inventory Management System" << endl << endl;

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
    
    /* Prompt user to which item to create or update */
    cout << endl << "\033[2m[Case sensitive & Max of " << MAXINPUT << " characters or type `exit` to terminate program]\033[0m"
        << endl << "Item to update: ";
    getline(cin, item);
    if(item.length() > MAXINPUT){
      item = item.substr(0, MAXINPUT);
    }
    cout << item << endl;

    if(item == "exit")
      break;

    /* Prompt user for the stock count */
    cout << "Stock #: ";
    cin >> stock;
  }
  
  return EXIT_SUCCESS;
}
