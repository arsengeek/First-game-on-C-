#include <iostream>
#include <iomanip>

char showPlayer();
char showComputer();
void checkWin(char showComputer ,char showPlayer);

int main(){     
    char player = showPlayer();
    char computer = showComputer();
    checkWin(player , computer);
}
char showPlayer(){
    char step;
    do{ 
        std::cout << "Choose ypur step";
        std::cin >> step;
    }while(step != 'r' && step != 'p' && step != 'n');


    switch(step){
        case 'r': std::cout << "Your choise Rock" << '\n';
            break;
        case 'p': std::cout << "Your choise peper" << '\n' ;
            break;
        case 'n': std::cout << "Your choise scissors" << '\n';
            break; 
    };return step;
}

char showComputer(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: std::cout << "COMPTER choise Rock" << '\n' ;
            break;
        case 2: std::cout << "COMPTER choise peper" << '\n' ;
            break;
        case 3: std::cout << "COMPTER choise scissors" << '\n' ; 
            break; 
    };return num;
}

void checkWin(char showPlayer, char showComputer){
    if(showPlayer == showComputer){
        std::cout << "It's a tie!";
    } else if((showPlayer == 'r' && showComputer == 's') ||
              (showPlayer == 'p' && showComputer == 'r') ||
              (showPlayer == 's' && showComputer == 'p')){
        std::cout << "You win!";
    } else {
        std::cout << "Computer wins!";
    }
}