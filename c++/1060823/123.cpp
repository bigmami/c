#include <iostream>

using namespace std ;
 
struct screen {
   int row , col ;
   void running_light( const int & , const int & ) ;
};

void sleep(const int &t) {
	int i ;
   for ( i = 0 ; i< 1000000*t ; ++i ) {}
}

main() {
   screen A ;
   cout << "\x1b[2J" ;
   A.running_light(1,1) ;
   cout << "\x1b[2B" ;
}

void screen::running_light(const int &nrow , const int &ncol ) {
   char letter1[] = {'*',' ',' ','*',' ',' ','*','*',' ',' ','*',' ',' ','*'} ;
   char letter2[] = {'*','*',' ','*',' ','*',' ',' ','*',' ','*',' ',' ','*'} ;
   char letter3[] = {'*',' ','*','*',' ','*',' ',' ',' ',' ','*',' ',' ','*'} ;
   char letter4[] = {'*',' ',' ','*',' ','*',' ',' ','*',' ','*',' ',' ','*'} ;
   char letter5[] = {'*',' ',' ','*',' ',' ','*','*',' ',' ',' ','*','*',' '} ;
   int i ;
   row = nrow ;
   col = ncol ;
   for ( i= 0  ; i < 500 ; ++i ) {
      cout << "\x1b[" << row << ";" << col+(i%15) +1 << "H"
 	   << letter1[i%14]<< flush ;
      cout << "\x1b[" << row + 1 << ";" << col+(i%15) +1 << "H"
           << letter2[i%14]<< flush ;
      cout << "\x1b[" << row + 2 << ";" << col+(i%15) +1 << "H"
           << letter3[i%14]<< flush ;
      cout << "\x1b[" << row + 3 << ";" << col+(i%15) +1 << "H"
           << letter4[i%14]<< flush ;
      cout << "\x1b[" << row + 4 << ";" << col+(i%15) +1 << "H"
           << letter5[i%14]<< flush ;

      sleep(20);
    }
   } 
