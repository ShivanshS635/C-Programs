#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define SNAKE 1
#define LADDER 2

struct Square {
    int type;
    int destination;
};

int roll_dice() {
    return rand() % 6 + 1;
}

int move(int position, int roll, struct Square board[SIZE]) {
    position += roll;
    if (position >= SIZE) {
        return SIZE;
    }
    if (board[position].type == SNAKE) {
        printf("You landed on a snake and went down to %d\n", board[position].destination);
        return board[position].destination;
    }
    if (board[position].type == LADDER) {
        printf("You climbed up a ladder to %d\n", board[position].destination);
        return board[position].destination;
    }
    return position;
}

void init_board(struct Square board[SIZE]) {
    int i;
    for (i = 0; i < SIZE; i++) {
        board[i].type = 0;
        board[i].destination = 0;
    }
    board[3].type = SNAKE;
    board[3].destination = 22;
    board[5].type = LADDER;
    board[5].destination = 8;
    board[11].type = SNAKE;
    board[11].destination = 2;
    board[20].type = LADDER;
    board[20].destination = 70;
}

int main() {
    int position = 0;
    int roll;
    struct Square board[SIZE];
    init_board(board);
    srand(time(NULL));
    while (position < SIZE) {
        roll = roll_dice();
        printf("You rolled a %d\n", roll);
        position = move(position, roll, board);
        printf("You are now on square %d\n", position);
    }
    printf("You won!\n");
    return 0;
}

