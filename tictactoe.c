#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables
char sign1 = 'X';
char sign2 = 'O';
char board[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
int game = 1; // 1 - on, 0 - over, 2 - draw
int player = 1; // 1 & 2
int move = 0;

// Function prototypes
void init();
void draw_board();
void player_one(int choice);
void player_two(int choice);
void check_win();
void play_game_1();
void play_game_2();

int main() {
    init();
    play_game_1();
    if (game == 0) {
        printf("Player %d wins\n", player);
    } else {
        printf("Draw!\n");
    }
    return 0;
}

void draw_board() {
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
}

void player_one(int choice) {
    if (board[choice] == ' ') {
        board[choice] = sign1;
    } else {
        printf("You can't play that, pick again\n");
        printf("Make a move\n");
        scanf("%d", &choice);
        player_one(choice);
    }
}

void player_two(int choice) {
    if (board[choice] == ' ') {
        board[choice] = sign2;
    } else {
        printf("You can't play that, pick again\n");
        printf("Make a move\n");
        scanf("%d", &choice);
        player_two(choice);
    }
}

void check_win() {
    if ((board[1] == board[2] && board[2] == board[3] && board[1] != ' ') ||
        (board[4] == board[5] && board[5] == board[6] && board[4] != ' ') ||
        (board[7] == board[8] && board[8] == board[9] && board[7] != ' ') ||
        (board[1] == board[4] && board[4] == board[7] && board[1] != ' ') ||
        (board[2] == board[5] && board[5] == board[8] && board[2] != ' ') ||
        (board[3] == board[6] && board[6] == board[9] && board[3] != ' ') ||
        (board[1] == board[5] && board[5] == board[9] && board[1] != ' ') ||
        (board[3] == board[5] && board[5] == board[7] && board[3] != ' ')) {
        game = 0; // game over
    } else if (board[1] != ' ' && board[2] != ' ' && board[3] != ' ' &&
               board[4] != ' ' && board[5] != ' ' && board[6] != ' ' &&
               board[7] != ' ' && board[8] != ' ' && board[9] != ' ') {
        game = 2; // draw
    } else {
        game = 1; // game continues
    }
}

void init() {
    char input;
    printf("Choose a sign: X or O (X is default)\n");
    input = getchar();
    if (input == 'O' || input == 'o') {
        sign1 = 'O';
        sign2 = 'X';
    }
    printf("Your sign is %c\n", sign1);
    draw_board();
}

void play_game_1() {
    printf("Player 1 plays\n");
    player = 1;
    int choice;
    printf("Make a move\n");
    scanf("%d", &choice);
    player_one(choice);
    draw_board();
    move++;
    if (move > 4) {
        check_win();
    }
    if (game == 1) {
        play_game_2();
    }
}

void play_game_2() {
    printf("Player 2 plays\n");
    player = 2;
    int choice;
    printf("Make a move\n");
    scanf("%d", &choice);
    player_two(choice);
    draw_board();
    move++;
    if (move > 4) {
        check_win();
    }
    if (game == 1) {
        play_game_1();
    }
}