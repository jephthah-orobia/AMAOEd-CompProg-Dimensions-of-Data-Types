/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: Theatre Seating Chart
 * @app desc: 
 *  (Read README.MD)
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
  const int rows = 10, cols = 30;
  char seatingChart[rows][cols];

  memset(seatingChart, 'O', sizeof(seatingChart));

  while(true){
    int r, c;

    /* Print Column Labels */
    cout << "\033[2m   |";
    for(int col_label = 1; col_label <= cols; col_label++){
      cout << " " << left << setfill(' ') << setw(2) << col_label;
    }
    cout << endl << "---+" << setfill('-') << setw(cols*3) << "-" << endl;
    cout << setfill(' ') << left;
    
    for(int row = 1; row<=rows; row++){
      cout << "\033[2m" << setw(3) << row << "|\033[0m";
      for(int col = 1; col<=cols; col++){
        cout << " " << seatingChart[row-1][col-1] << " ";
      }
      cout << endl;
    }
    cout << "pause";
    cin >> r;
  }

  return EXIT_SUCCESS;
}
