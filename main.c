#include <stdio.h>
#include <stdio.h>
#include <string.h>

/*
Random direction generator to play at timber lakes elementary
a random direction out of 3 (up, Left, Right) will be chosen.
the students must match the direction or be considered out.


TODO
Generate basic structure (done)
Create Random Number (done)
Create the function to loop # of times (done)
Create a countdown maybe
Create an automatic mode

*/

//using namespace std;

void menue();
//void playGame(int);
//bool exitGame();
//void upDirection();
//void leftDirection();
//void rightDirection();
//void credits();


int main()
{
    menue();
    return 0;
}
//------------------------------------------------------------------------------------
void menue(){

    printf("$$___$$___________$$__________________________________\n");
    printf("$$___$$__$$$$_____$$_____$$$$____$$$$___$$$$$$___$$$$_\n");
    printf("$$_$_$$_$$__$$____$$____$$__$$__$$__$$__$$_$_$$_$$__$$\n");
    printf("$$_$_$$_$$__$$____$$____$$______$$__$$__$$_$_$$_$$__$$\n");
    printf("$$_$_$$_$$$$$$____$$____$$______$$__$$__$$_$_$$_$$$$$$\n");
    printf("_$$_$$__$$________$$____$$______$$__$$__$$_$_$$_$$____\n");
    printf("_$$_$$__$$________$$____$$__$$__$$__$$__$$_$_$$_$$____\n");
    printf("_$$_$$___$$$$___$$$$$$___$$$$____$$$$___$$___$$__$$$$\n\n");


    int menueAgain = 0;
    int input=0;
    int numberOfRounds=0;



   // do{
    printf("Welcome To Direction\n");
    printf("select your option:\n");

    printf("(1) start game\n");
    printf("(2) view credits \n");
    printf("(3) end game\n");

    scanf(" %d", &input);
    switch(input == 0){
    case 1:
        printf("Starting game ...\n Enter The Number of rounds \n");
        scanf(" %d", &numberOfRounds);
       //playGame(numberOfRounds);
        break;
    case 2:
        //Viewing Credits
       // credits();
        break;
    case 3:
        //end
       // menueAgain = exitGame();
        menueAgain = 1;
        break;
    default:
        printf("Incorrect Input \n");
        printf("Try again\n");
        break;

    }

    //}while(menueAgain == 0);


}
//-------------------------------------------------------------------------------
/*
void playGame(int numberOfRounds){
    cout << "Play Game\n";
    // pause system when ready press enter
    for(int i = 0; i < numberOfRounds;i++){

            cout << "Round " << i +1 << endl;
            cout << "Ready ? ..." << endl;
            system("pause");
            int randomNum = rand() % 3;
            switch(randomNum)
            {
            case 0:
                upDirection();
                break;
            case 1:
                leftDirection();
                break;
            case 2:
                rightDirection();
                break;
            default:
                cout << "inpropper rand num generated " << endl;
                cout << "num generated = " << randomNum << endl;
                break;
            }

    }

}

bool exitGame(){
    cout << "Exiting Game... Press enter to exit \n";
    //add a system pause
    system("pause");
    return false;
}
//----------------------------------------------------------------------------------

void upDirection(){
    cout << "UP" << endl;
    cout << "     ." << endl;
cout << "   .:;:." << endl;
cout << " .:;;;;;:." << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;;;;;" << endl;
cout << "   ;:;;;" << endl;
cout << "   : ;;;" << endl;
cout << "     ;:;" << endl;
cout << "   . :.;" << endl;
cout << "     . :" << endl;
cout << "   .   ." << endl;
cout << "" << endl;
cout << "      ." << endl;

}

void leftDirection(){
    cout << "LEFT" << endl;
    cout << "       ." << endl;
cout << "     .;;............ .." << endl;
cout << "   .;;;;::::::::::::.." << endl;
cout << "    ':;;:::::::::::: . ." << endl;
cout << "      ':" << endl;

}

void rightDirection(){
    cout << "RIGHT" << endl;
    cout << "                  ." << endl;
cout << "   .. ............;;." << endl;
cout << "    ..::::::::::::;;;;." << endl;
cout << "  . . ::::::::::::;;:'" << endl;
cout << "                  :'" << endl;

}

void credits(){
    cout << "CREDITS" << endl;
    cout << "I wanna thank me for taking no days off \n";

}*/
