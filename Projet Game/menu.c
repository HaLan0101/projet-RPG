#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "Structure.h"
#include "Deplacement.h"
#include "Loading.h"
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
                srand(time(NULL));
                loading();
                adventure();
                break;
            case 2:
                printf("Server loading please wait...");
                loading();
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
    struct Player player;


    player.pv =70;
    player.force =6;
    player.critique = 0;
    player.defense = 0;
    player.xp=0;
    player.niveau=1;


    //int lvl[11] = {5,10,15,20,25,30,35,40,45,50,55};
   // player.lvlup = lvl;


    monster1.pv = 20;
    monster1.force =4;
    monster1.critique = 0;
    monster1.defense = 0;
    monster1.xp=1;

    monster2.pv = 25;
    monster2.force =6;
    monster2.critique = 0;
    monster2.defense = 2;
    monster2.xp = 3;


    monster3.pv = 40;
    monster3.force =9;
    monster3.critique = 0;
    monster3.defense = 2;
    monster3.xp = 5;

    monster4.pv = 50;
    monster4.force =13;
    monster4.critique = 0;
    monster4.defense = 3;
    monster3.xp = 7;

    monster5.pv = 65;
    monster5.force =18;
    monster5.critique = 0;
    monster5.defense = 3;
    monster3.xp = 9;

    monster6.pv = 90;
    monster6.force =24;
    monster6.critique = 0;
    monster6.defense = 4;
    monster3.xp = 11;





    printf("\n\n ATTACK avec monstre 1 \n\n");
    Attack(&player,&monster1);
    printf("\n\n END Combat avec monster 1 \n\n");
    printf("\n\n ATTACK avec monstre 2 \n\n");
    Attack(&player,&monster2);
    printf("\n\n END Combat avec monster 2 \n\n");
    printf("\n\n ATTACK avec monstre 3 \n\n");
    Attack(&player,&monster3);
    printf("\n\n END Combat avec monster 3 \n\n");


 printf("\n\n END START \n\n");
}
/*void continuer(struct Player* player)
{
    if(player->niveau == 1 && player->xp>=0)
    {
        printf("\n\n ATTACK avec monstre 1 \n\n");
        Attack(&player,&monster1);
        printf("\n\n END Combat avec monster 1 \n\n");
    }
    else if(player->niveau == 1 && player->xp>=1 && player->xp<=3 )
    {
        printf("\n\n ATTACK avec monstre 2 \n\n");
        Attack(&player,&monster2);
        printf("\n\n END Combat avec monster 2 \n\n");
    }
    else if(player->niveau == 2 && player->xp>=1 && player->xp<=3 )
    {
        printf("\n\n ATTACK avec monstre 3 \n\n");
        Attack(&player,&monster3);
        printf("\n\n END Combat avec monster 3 \n\n");
    }
    else if()
    {
        printf("\n\n ATTACK avec monstre 4 \n\n");
        Attack(&player,&monster4);
        printf("\n\n END Combat avec monster 4 \n\n");
    }
    else if()
    {
        printf("\n\n ATTACK avec monstre 5 \n\n");
        Attack(&player,&monster5);
        printf("\n\n END Combat avec monster 5 \n\n");
    }
    else if()
    {
        printf("\n\n ATTACK avec monstre 6 \n\n");
        Attack(&player,&monster6);
        printf("\n\n END Combat avec monster 6 \n\n");
    }
}
*/
