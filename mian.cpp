#include <iostream>
#include <sstream>

int main()
{
	int where=1;
	bool failure,failure1;
    		int a,a1;
    for( std::string string; std::getline( std::cin, string ); ) {
    		
        int numbers[ 10 ];
        std::istringstream stream( string );
        switch(where){
        case 1:
          failure = false;
          for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
           }
           a=numbers[0];
           for( int i = 0; i < 10; ++i ){
        	    if (numbers[i]>a){
        		a=numbers[i];
        	      }
               }
               where++;
               break;
        case 2:
        failure1 = false;
          for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure1 = true;
                break;
            }
           }
           a1=numbers[0];
           for( int i = 0; i < 10; ++i ){
        	    if (numbers[i]>a1){
        		a1=numbers[i];
        	      }
               }
               if( !(failure1)&&!(failure) ) {
       	
            std::cout<< a+a1;
        }
        else {
            std::cout << "An error has occured while reading numbers from line" << std::endl;
        }
        
               break;
               
         
        }
       
        
        
    }
   
    return 0;   
}
