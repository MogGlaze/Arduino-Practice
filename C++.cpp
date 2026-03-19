

/// Nested Loops(Symbol generator squres)
#include <iostream>
#include <cmath>


int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows";
    std::cin >> rows;

    std::cout << "How many columns";
    std::cin >> columns;

    std::cout << "What character?";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= columns; j++){
            std::cout << symbol;

        }
        std::cout << '\n';


    }
  

return 0;

}
///  "random Numbers"


#include <iostream>
#include <ctime> 


int main()
{
    srand(time(NULL)); /// NUMBER FUNCTION WITH GENERATOR SEED

    int num1 = (rand() % 6)+1; /// rand function with + 1 to have (1-6) dice
    int num2 = (rand() % 6)+1;
    int num3 = (rand() % 6)+1;

    

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";


return 0;

}
//// Random Event

#include <iostream>
#include <ctime>


int main()
{
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch (randNum){ /// Switch and case ----- If and elif
        case 1: std::cout << "You win a sticker!";
                 break;
        case 2:std::cout << "You win a Shirt!";
              break;
        case 3:std::cout << "You win a Lunch!";
                 break;
        case 4:std::cout << "You win a Gift Card!";
              break;
        case 5:std::cout << "You win a Car!";
              break;

    }
    
  

return 0;

}
////GUESS GAMING
#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries = 0;  // FIXED

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Welcome to the number guesser\n";

    do{
        std::cout << "Guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high\n";
        }
        else if(guess < num){
            std::cout << "Too low\n";
        }
        else{
         std::cout << "It took a total of " << tries;
        }

    } while (guess != num);
    

    return 0;
}
////

#include <iostream>

int main(){
 
    std::string students[] = {"Glaceon"," Sylveon"," leafeon","Goofy Ahh"};

    for(int i = 0;i < sizeof(students)/sizeof(std::string); i++)
    {
        std::cout << students[i];
    }
}
/// Without having to change the length of the array use Sizeof() for automatic adjustments

/// FOR EACH LOOP
#include <iostream>

int main(){
 
    int grades[] = {65,23,56,290};

   for(int grade : grades){ ///// Grade is the new variable replacing grades for array
    std::cout << grade << "\n";

   }
   
}
/// Without having to change the length of the array use Sizeof() for automatic adjustments


///Passing an array over to a function
#include <iostream>


double GetTotal(double prices[],int sizes);

int main(){


    double prices[] = {50.20,30,43.32,33.43,99.29};

    int size = sizeof(prices)/sizeof(prices[0]);
    
    double amount = GetTotal(prices, size);

    std::cout << "$" << amount;


    return 0;
}

double GetTotal(double prices[],int size){
    double amount = 0;
    for(int i = 0; i < size; i++){
        amount += prices[i];
        
    }
    return amount;
}


