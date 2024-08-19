#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char player);
bool checkWin(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {

    char spaces[9];
    fill(spaces, spaces + 9, ' '); // Fill the spaces array with empty spaces
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces); // Draw the initial board

    while(running) {

        playerMove(spaces, player); // Player move
        drawBoard(spaces); // Draw the board after the player moves

        if(checkWin(spaces, player, computer)) { // Check if the player wins
            running = false;
            break;
        }
        else if(checkTie(spaces)) { // Check if the game is a tie
            cout << "It's a tie!" << endl;
            running = false;
            break;
        }

        computerMove(spaces, computer); // Computer move
        drawBoard(spaces); // Draw the board after the computer moves

        if(checkWin(spaces, player, computer)) { // Check if the computer wins
            running = false;
            break;
        }
        else if(checkTie(spaces)) { // Check if the game is a tie
            cout << "It's a tie!" << endl;
            running = false;
            break;
        }
    }
    return 0;
}
void drawBoard(char *spaces) {

    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}
void playerMove(char *spaces, char player) {

    int number; // The number of the space the player chooses

    do {
        cout << "Enter a number between 1 and 9: ";
        cin >> number;
        number--; // Adjust the number to match the index of the spaces array

        if (spaces[number] == ' ') 
        {
            spaces[number] = player;
            break;
        }

    } while(number < 1 || number > 9);
}
void computerMove(char *spaces, char player) {

    int number; // The number of the space the computer chooses
    srand(time(0)); // Seed the random number generator

    while(true) {
        number = rand() % 9; // Generate a random number between 0 and 8

        if (spaces[number] == ' ') 
        {
            spaces[number] = player;
            break;
        }
    }
}
bool checkWin(char *spaces, char player, char computer) {

    if (spaces[0] != ' ' && (spaces[0] == spaces[1] && spaces[1] == spaces[2])) {
        spaces[0] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[3] != ' ' && (spaces[3] == spaces[4] && spaces[4] == spaces[5])) {
        spaces[3] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[6] != ' ' && (spaces[6] == spaces[7] && spaces[7] == spaces[8])) {
        spaces[6] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[0] != ' ' && (spaces[0] == spaces[3] && spaces[3] == spaces[6])) {
        spaces[0] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[1] != ' ' && (spaces[1] == spaces[4] && spaces[4] == spaces[7])) {
        spaces[1] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[2] != ' ' && (spaces[2] == spaces[5] && spaces[5] == spaces[8])) {
        spaces[2] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[0] != ' ' && (spaces[0] == spaces[4] && spaces[4] == spaces[8])) {
        spaces[0] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else if (spaces[2] != ' ' && (spaces[2] == spaces[4] && spaces[4] == spaces[6])) {
        spaces[2] == player ? cout << "You Win!" : cout << "Computer wins!";
    }
    else {
        return 0; // No winner yet
    }

    return 1; // There is a winner
}
bool checkTie(char *spaces) {

    for(int i = 0; i < 9; i++) {
        if(spaces[i] == ' ') {
            return 0; // The game is not a tie
        }
    }
    return 1; // The game is a tie
}
