#include <time.h>
#include "Deplacement.h"


void adventure()
{
            int story =((rand()%100));
            printf("\n\nRandom number 1 to 100: %d\n\n",story);
            printf("\n\nYou've found a new place");
            if (story==1)
            {
                printf("\n\nYou find The Legendary Hero gemstone next to corpse dressed like a thief.\n A lost artifact equipable to a sword giving it sharpness capable to cut the sky.");
                start();
            }
            else if (story>=2 && story<=10)
            {
                printf("\n\nYou've found a flower of might, a consumable flower that strengthens the consumers power");
                start();
            }
            else if (story>10 && story<=20)
            {
                printf("\n\nYou've found an adamant flower, a consumable flower that hardens the consumers flesh");
                start();
            }
            else if (story>20 && story<=30)
            {
                printf("\n\nYou've found a shiny stone\n");
                printf("1. Swallow the shiny rock.\n 2.Break the shiny rock with your sword.\n 3.Kick it.\n");
                printf("Your choice? \n");
                int encounter1;
                int encounter1story;
                int treasurechest;
                do
                {
                    scanf("d%", &encounter1);
                    switch(encounter1)
                    {
                        case 1:
                            printf("You swallowed the rock, giving you a weird stomach ache and a weird feeling of strenght.");
                        //+5 defense
                            break;
                        case 2:
                            printf("You break the rock with a fast swift, making your sword glow in a shiny light");
                        //+5attack
                            break;
                        case 3:
                            encounter1story =((rand()%100));
                            printf("\n\nRandom number 1 to 100: %d\n\n",encounter1story);
                            printf("You kicked the rock, the rock roll and lightened a cave hidden by the darkness.\n You go inside and found a treasure chest");
                            if (encounter1story <=50)
                            {
                                printf("You open the chest and it happened to be a hidden Mimic");
                                start(); // combat
                            }
                            else if (encounter1story > 50)
                            {
                                treasurechest = ((rand()%100));
                                printf("\n\nRandom number 1 to 100: %d\n\n",treasurechest);
                                printf("You've found multiple potions");
                                if (treasurechest <= 50)
                                {
                                    printf("You've found 2 potions");
                                    //add 2 potions
                                }
                                else if (treasurechest > 50)
                                {
                                    printf("You've found 4 potions");
                                    //add 4 potions
                                }
                            }
                            break;
                        default:
                            printf("encounter 1 Please choose a number between 1 and 3 \n");
                            break;
                    }
                }
                while (story>20 && story<=30 && encounter1<1 && encounter1>3);
            }
            else if (story>30 && story<=40)
            {
                printf ("\n\nYou see a bonlit fire. Beside it an old mans struggling to keep it on.\n You cross eyes with him and decide to make a small conversation.\n");
                printf ("\n\nAfter some time, he smiled brightly and asked for you to kill him\n");
                printf ("1. talk him into keeping his life.\n 2. Kill him.\n 3. Ignore him and go away\n");
                printf("Your choice? \n");
                int encounter2;
                do
                {
                    int encounter2;
                    scanf("d%", &encounter2);
                    switch(encounter2)
                    {
                        case 1:
                            printf("His smiled turned into a frown and leave.");
                            start();
                            break;
                        case 2:
                            //if player level > 10 old man = dead
                            //if player lever < 10 nothing happens
                            printf("You stab him right into his chest and nothing happens. His body was as hard as an adamantite\n");
                            printf("He smile turn into a forced one and left you alone in the dark");
                            start();
                            break;
                        case 3:
                            printf("You walk away.\n You turned your back to look at him one more time but he already dissapear with the fire.\n");
                            start();
                            break;
                        default:
                            printf(" encounter 2 Please choose a number between 1 and 3 \n");
                            break;
                    }
                }
                while (story>30 && story<=40 && encounter2<1 && encounter2>3 );
            }
            else if (story>40 && story<=50)
            {
                printf("\n\nYou see an old lover, She tearfully laugh and hugged you. You talk to her\n ");
                printf("\n\nShe seemed to have been looking for you corpse alone to make a proper grave\n");
                printf("\n1. Punch her right in the face.\n 2.Embrace her and tell her to leave to safety.\n 3.Ignore her.\n");
                printf("Your choice? \n");
                int encounter3;
                do
                {
                    scanf("d%", &encounter3);
                    switch(encounter3)
                    {
                        case 1:
                            printf("You punch her right into her pretty face.\n She bleeds and dies\n");
                            // +1 potion
                            break;
                        case 2:
                            printf("You embrace her slender unnourished body and beg to head for safety\n");
                            printf("She heartfully accepts and leaves\n");
                            printf("Her warmth gave you courage\n");
                            //+2 defence
                            break;
                        case 3:
                            printf("You ignored her presence thinking she could be a monster.\n She follows you like newborn duckling and then died from exhaustion.\n");
                            printf("Her corpse confirmed that she was a real person and not a trick.\n You feel bad from regret.");
                            //-2 defence
                            break;
                        default:
                            printf(" encounter 3 Please choose a number between 1 and 3 \n");
                            break;
                    }
                }
                while (story>40 && story<=50 && encounter3<1 && encounter3>3);
            }
            else if (story>50 && story<=60)
            {

                printf("\n\nA fairy fly towards you, she seemed to be attracted to you presence as the Hero.\n");
                printf("\n\nIt flew around you covering you with fairy dust.\n");
                printf("\n\nYour body shined as your brain absorbs memories from your predecesors");
                // +10exp

            }
            else if (story>60 && story<=70)
            {

                printf("\n\nYou as you keep walking in the forest.\n");
                printf("\n\nYou trip unto a rock");
                //-2hp

            }
            else if (story>70 && story<=80)
            {

                printf("Y\n\nou've found a fountain of health.\n A legendary water source that rumored to give immortality if drank\n");
                printf("\n\nYou drink it confidently");
                // +30 hp

            }
            else if (story>80 && story<=90)
            {
                printf("\n\nYou grow tired of walking and decided to sleep somewhere\n");
                printf("1. Sleep beside a Tree. \n 2.Sleep on the grass\n 3. Don't sleep\n");
                printf("Your choice? \n");
                int encounter4;
                do
                {
                    scanf("d%", &encounter4);
                    switch(encounter4)
                    {
                        case 1:
                            printf("You under the tree. After a moment of rest , it started moving\n The tree turns out to be a treant and starts attacking you.");
                            // combat
                            start();
                            break;
                        case 2:
                            printf("You are able to relax on the windy grass field");
                            // +5hp
                            break;
                        case 3:
                            printf("You kept walking, collapse due to fatigue and hit your face on the hard ground");
                            //-2 health
                            break;
                        default:
                            printf(" encounter 4 Please choose a number between 1 and 3 \n");
                            break;
                    }
                }
                while (story>80 && story<=90 && encounter4<1 && encounter4>3);
            }
            else if (story>90)
            {
                int encounter5 = 0;
                printf("\n\nYou feel lonely and decided to day dream.\n You remember the times you trained with your allies\n");
                printf("\n\nYou then start practicing your skills in your head\n");
                // +5 exp
            }

}
