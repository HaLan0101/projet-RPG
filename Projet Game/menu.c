#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
void menu()
{
	int choiceMenu;
	printf("====Main Menu==== \n\n");
	printf("1. Create new game \n");
	printf("2. Load Saved Game \n");
	printf("3. About \n");
	printf("4. Your account \n");
	printf("5. Exit \n");
	printf("Your choice? \n");


	do
    {
        scanf("%d",&choiceMenu);
        switch(choiceMenu)
        {
            case 1:
                printf("Please enter your name here:  ");
                char yourname[50];
                scanf("%s",yourname);
                printf("Hello %s ! Welcome to the story of our game\n", yourname);
                start();
                break;
            case 2:
                printf("Server loading please wait...");
                break;
            case 3:
                printf(" Name of student: \n DANG Ngoc Ha Lan \n PELENIO DJ Everson \n");
                printf("This is the story of our game:");
                break;
            case 4:
                printf("choose your account");
                break;
            case 5:
                printf("Bye Bye");
                break;
            default:
                printf("Please choose a number between 1 and 5 \n");
                break;
        }
    }
    while (choiceMenu != 5);
}

void start()
{

    printf(" \n\n Start \n\n");
    struct Monster monster1;
    struct Monster monster2;
    struct Monster monster3;
    struct Monster monster4;
    struct Monster monster5;
    struct Monster monster6;
    struct Player player1;
    struct Player player2;
    struct Player player3;
    struct Player player4;
    struct Player player5;

    player1.pv = 20;
    player1.force =4;
    player1.critique = 0;
    player1.defense = 0;
    player1.xp=0;

    player2.pv = 30;
    player2.force =5;
    player2.critique = 0;
    player2.defense = 1;
    player2.xp=0;

    player3.pv = 45;
    player3.force =8;
    player3.critique = 0;
    player3.defense = 1;
    player3.xp=0;

    player4.pv =65;
    player4.force =10;
    player4.critique = 0;
    player4.defense = 2;
    player4.xp=0;

    player5.pv = 90;
    player5.force =13;
    player5.critique = 0;
    player5.defense = 2;
    player5.xp=0;
    //int lvl[11] = {5,10,15,20,25,30,35,40,45,50,55};
   // player.lvlup = lvl;
    player.niveau=1;

    monster1.pv = 20;
    monster1.force =4;
    monster1.critique = 0;
    monster1.defense = 0;
    monster1.niveau=1;

    monster2.pv = 25;
    monster2.force =6;
    monster2.critique = 0;
    monster2.defense = 2;
    monster2.niveau=2;


    monster3.pv = 40;
    monster3.force =9;
    monster3.critique = 0;
    monster3.defense = 2;
    monster3.niveau=3;

    monster4.pv = 50;
    monster4.force =13;
    monster4.critique = 0;
    monster4.defense = 3;
    monster4.niveau=3;

    monster5.pv = 65;
    monster5.force =18;
    monster5.critique = 0;
    monster5.defense = 3;
    monster5.niveau=3;

    monster6.pv = 90;
    monster6.force =24;
    monster6.critique = 0;
    monster6.defense = 4;
    monster6.niveau=3;





    printf("\n\n ATTACK \n\n");
    Attack(&player,&monster1);
    printf("\n\n END Combat avec monster 1 \n\n");


 printf("\n\n END START \n\n");
}
