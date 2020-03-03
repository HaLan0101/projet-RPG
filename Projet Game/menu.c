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
    struct Player player;

    player.pv = 10;
    player.force =4;
    player.critique = 10;
    player.defense = 0;
    player.xp=0;
    //int lvl[11] = {5,10,15,20,25,30,35,40,45,50,55};
   // player.lvlup = lvl;
    player.niveau=1;

    monster1.pv = 10;
    monster1.force =2;
    monster1.critique = 2;
    monster1.defense = 0;
    monster1.niveau=1;

    monster2.pv = 15;
    monster2.force =4;
    monster2.critique = 5;
    monster2.defense = 2;
    monster2.niveau=2;


    monster3.pv = 20;
    monster3.force =6;
    monster3.critique = 10;
    monster3.defense = 4;
    monster3.niveau=3;


    printf("\n\n ATTACK \n\n");
    Attack(&player,&monster1);
    printf("\n\n END Combat avec monster 1 \n\n");


 printf("\n\n END START \n\n");
}
