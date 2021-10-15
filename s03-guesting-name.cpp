#include <iostream>
#include <cstdlib>
#include <time.h>
int main()
{
         srand (time(NULL));
         int const number = rand() % 100 + 1;
int tryNum;
            do {
                std :: cout <<"Enter number"<< std::endl;
                std :: cin >> tryNum;
                if (tryNum > number){
                std::cout << "It's too big!"<< std ::endl;
                }
                else if(tryNum < number){
                    std::cout << "It's too small!"<< std ::endl;
                   }
                    
            } while(number != tryNum); 
            std :: cout << "Well done";
    
    return 0;
}

