#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 20
#define COL 40

int x, y, fruitX, fruitY, score;
int gameOver;
int tailX[100], tailY[100];
int nTail = 0;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup()
{
    gameOver = 0;
    dir = STOP;
    x = ROW / 2;
    y = COL / 2;
    fruitX = rand() % ROW;
    fruitY = rand() % COL;
    score = 0;
}

void Draw()
{
    system("cls"); // clear the console

    // draw the top wall
    for (int i = 0; i < COL + 2; i++)
        printf("#");
    printf("\n");

    // draw the side walls and the snake
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (j == 0)
                printf("#");
            if (i == x && j == y)
                printf("O");
            else if (i == fruitX && j == fruitY)
                printf("F");
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == i && tailY[k] == j) {
                        printf("o");
                        print = 1;
                    }
                }
                if (!print)
                    printf(" ");
            }
            if (j == COL - 1)
                printf("#");
        }
        printf("\n");
    }

    // draw the bottom wall
    for (int i = 0; i < COL + 2; i++)
        printf("#");
    printf("\n");

    // display the score
    printf("Score: %d\n", score);
}

void Input()
{
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
        	dir = DOWN;
            break;}
        }
}
int main()
{
	voi
}
