// Origin: Jan 29, 2020

# include <iostream>
# include <limits>
# include <iomanip>
using namespace std ;

int main() {
	int rows ;
	int cols ;
	int r ;
	int c ;
	// declaration of variables

	do {
		cout << "Enter a number of rows (1-12): " ;
		cin >> rows ;
		if ( !cin || rows < 1 || rows > 12 ) {
			cout << "Error: Input is incorrect.\n\n" ;
			// flags incorrect input
		}
	} while ( !cin || rows < 1 || rows > 12 ) ;
	// asks for rows
	
	do {
		cout << "Enter a number of columns (1-12): " ;
		cin >> cols ;
		if ( !cin || cols < 1 || cols > 12 ) {
			cout << "Error: Input is incorrect.\n\n" ;
			// flags incorrect input 
		}
	} while (!cin || cols < 1 || cols > 12 ) ;
	// asks for columns
	
	while (true) { 
		cout << "\n<table>\n" ;
		// prints every time
        
		for ( r = 1 ; r <= rows ; r++ ) {
			cout << "<tr> " ; 
			for (c = 1 ; c <= cols ; c++ ) {
				cout << setw(6) << "<td>" << setw(3) << ( r * c ) << "</td> " << setw(6) ;
				// generates the table 
			}       
			cout << "</tr>" ;
			cout << "\n" ;
			// bookends table
			}
		cout << "</table>\n" ;
		break ; 
		// ends table 
		}
        
return 0 ;
}
