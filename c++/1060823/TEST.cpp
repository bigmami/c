#include <iostream>
#include <string>
 
using namespace std;

int main() {
    string number ;
    cout << "叫块┰计肂(程16) >> " ;
    cin >> number ;
    
    int i , size = number.size() ;
    
    for( i = 0 ; i < number.size() ; ++i ) {
         
         if( number[i] == '9' ) cout << "╤" ;
         if( number[i] == '8' ) cout << "" ;            
         if( number[i] == '7' ) cout << "琺" ;      
         if( number[i] == '6' ) cout << "嘲" ;
         if( number[i] == '5' ) cout << "ヮ" ;
         if( number[i] == '4' ) cout << "竩" ;
         if( number[i] == '3' ) cout << "把" ;
         if( number[i] == '2' ) cout << "禠" ;
         if( number[i] == '1' ) cout << "滁" ;
         if( number[i] == '0' ) { 
             if( size % 4 == 3 )
                 if( number[i + 1] != '0' || number[i + 2] != '0' ) cout 
<< "箂" ; 
             if( size % 4 == 2 && number[i-1] != '0' ) 
                 if( number[i + 1] != '0' )cout << "箂" ; 
         } 
         if( size % 4 == 1 ) {
             if( size / 4 == 1 )
                 if( number[i] != '0' || number[i - 1] != '0' || number[i 
- 2] != '0' || number[i - 3] != '0' ) cout << "窾" ;
             if( size / 4 == 2 ) 
                 if( number[i] != '0' || number[i - 1] != '0' || number[i 
- 2] != '0' || number[i - 3] != '0' ) cout << "货" ;
             if( size / 4 == 3 ) 
                 if( number[i] != '0' || number[i - 1] != '0' || number[i 
- 2] != '0' || number[i - 3] != '0' ) cout << "" ;                 
         }
         if( number[i] != '0' ) {                          
             if( size % 4 == 2 ) cout << "珺" ;
             if( size % 4 == 3 ) cout << "ㄕ" ;
             if( size % 4 == 0 ) cout << "" ;
         }           
         --size ;         
    } 
    cout << "じ俱\n" ;
    
    return 0 ;                                                                                                                          
}
