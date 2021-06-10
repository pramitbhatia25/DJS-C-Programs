#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

//Define a structure called cricket that will describe the following information
// –player name, country name best score, batting average. Develop a program that 
//will store information of 25 cricket players around the world using this structure. 
//Also display names of these cricketers in descending order with respect to their batting average.


struct Cricket{
    char name[30];
    char country[30];
    int bestscore;
    int battingavg;
};


int main()
{
    struct Cricket players[2];
    for(int i = 0; i < 2; i++)
    {
        printf("Enter Name of Player: ");
        fgets(players[i].name, 30, stdin);
        printf("\nEnter Country of Player: ");
        scanf("%s", players[i].country);
        printf("\nEnter Best Score of Player: ");
        scanf("%d", &players[i].bestscore);
        printf("\nEnter Batting Avg. of Player: ");
        scanf("%d", &players[i].battingavg);
        printf("\n");
        char c; // Collecting Newline character.
        scanf("%c", &c);
        int size = strlen(players[i].name); // Removing newline char at end of name string.
        players[i].name[size-1] = '\0';
    }   
    for(int i = 0; i < 2; i++)
    {
        printf("Name: %s, Couuntry: %s, BestScore: %d, BattingAvg: %d\n",players[i].name,players[i].country,players[i].bestscore, players[i].battingavg );
    }   
    return 0;
}
