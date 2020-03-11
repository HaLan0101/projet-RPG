/*#include <stdio.h>
#include <stdlib.h>
#include "journey.h"

void journey (struct Player* p)

{
    int choicejourney;
    int monstre = 1;
    printf("You are a fallen hero of a falling kingdom, you've won countless of battles in the name of you people but in the end before claiming your last victory, you've been betrayed by your own companions.\n");
    printf("They have been always secretly envious of your will and title as the great hero of war\n");
    printf("Little did they know, upon receiving that title. You also have received the attention of the goddess of compassion\n");
    printf("Between life in death you see her, she cries for you and decides to give you another chance to live for your desires");
    printf("You became the hero who crave for revenge");
    system("cls");
    loading();
    printf("You see a random scavenger, looting for scraps of war\n");
    printf("1.Kill him and absorb his essence\n2.Ignore him");
	do
    {
        scanf("%d",&choicejourney);
        switch(choicejourney)
        {
            case 1:
                printf("You fight him with your rusted sword.\n");
                start(monstre);
                system("cls");
                loading();
                printf("You killed him with no mercy.");
                printf("You continue movie forward seeking for your revenge");
                int choicejourney1;
                printf("You stumble in front of 2 deserters\n");
                printf("They look at you dumbfounded, as you are supposed to be dead\n");
                printf("1.Kill them and absorb their life force\n2.Ignore them");
                do
                {
                    scanf("%d",&choicejourney1);
                    switch(choicejourney1)
                    {
                        case 1:
                            loading();
                            system("cls");
                            start(monstre);
                            start(monstre);
                            printf("You killed them, you feel yourself growing stronger from each kills");
                            int choicejourney2;
                            printf("You see a group of soldiers pillaging a village\n");
                            printf("1.Save the village\n2.Ignore them");
                            do
                            {
                                scanf("%d",&choicejourney2);
                                switch(choicejourney2)
                                {
                                    case 1:
                                        system("cls");
                                        loading();
                                        monstre+=1;
                                        monstre+=1;
                                        monstre+=1;
                                        printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                        break;

                                    case 2:
                                        printf("You have chosen to ignore their death cries and continue your path");
                                        system("cls");
                                        loading();
                                        adventure(p);
                                        break;
                                }
                            }
                            while (choicejourney2!=2);

                        case 2:
                                printf("You have chosen to ignore the deserters and continue forth towards your journey for revenge");
                                system("cls");
                                loading();
                                adventure();
                                int choicejourney3;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney3);
                                        switch(choicejourney3)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                monstre+=1;
                                                monstre+=1;
                                                monstre+=1;
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                                break;

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure();
                                                break;
                                        }
                                }
                                while (choicejourney3!=2);
                }


            case 2:
                printf("You've chosen to ignore them and continue your way");
                system("cls");
                loading();
                adventure();
                printf("You continue movie forward seeking for your revenge");
                int choicejourney1;
                printf("You stumble in front of 2 deserters\n");
                printf("They look at you dumbfounded, as you are supposed to be dead\n");
                printf("1.Kill them and absorb their life force\n2.Ignore them");
                do
                {
                    scanf("%d",&choicejourney1);
                        switch(choicejourney1)
                        {
                            case 1:

                                loading();
                                system("cls");
                                monstre+=1;
                                monstre+=1;
                                printf("You killed them, you feel yourself growing stronger from each kills\n");
                                int choicejourney2;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney2);
                                        switch(choicejourney2)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                monstre+=1;
                                                monstre+=1;
                                                monstre+=1;
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");
                                                break;

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure();
                                                break;
                                        }
                                }
                                while (choicejourney2!=2);

                            case 2:
                                printf("You have chosen to ignore the deserters and continue forth towards your journey for revenge");
                                system("cls");
                                loading();
                                adventure();
                                int choicejourney3;
                                printf("You see a group of soldiers pillaging a village\n");
                                printf("1.Save the village\n2.Ignore them");
                                do
                                {
                                    scanf("%d",&choicejourney3);
                                        switch(choicejourney3)
                                        {
                                            case 1:
                                                system("cls");
                                                loading();
                                                monstre+=1;
                                                monstre+=1;
                                                monstre+=1;
                                                printf("You kill the pillagers but it was already too late, the town folks are already dead");

                                            case 2:
                                                printf("You have chosen to ignore their death cries and continue your path");
                                                system("cls");
                                                loading();
                                                adventure();
                                        }

                                }
                                while (choicejourney3!=2);
                        }
                 while (choicejourney1!=2);
                }
                while (choicejourney!=2);
            }

        while (choicejourney!=2);
    }
    while (choicejourney!=2);
}
*/
