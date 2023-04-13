#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct pos {
    int currX;
    int currY;
    int disp;
} pikaPos, meowthPos1, meowthPos2, gyarPos, endPos;

volatile int score = 99;
volatile int moves = 0;

void drawStart(void);
void drawPlay(void);
void gameplayIter(u32 *currButtons, u32 *previousButtons);
void moveEnemies(void);
void moveMeowth1(void);
void moveMeowth2(void);
void moveGyarados(void);
int collisionDetection(void);
int checkWin(void);
void drawWin(void);
void drawLose(void);

#endif
