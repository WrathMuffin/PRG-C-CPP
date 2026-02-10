#include <iostream>
using namespace std;

// Global array representing the 3x3 board (flattened to 1D array for easier input mapping)
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

// 1. Function to display the board
// This matches the format shown in the problem description
void displayBoard() {
    cout << endl;
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    cout << endl;
}

// 2. Function to check for a win or draw
// Returns:
//  1: Someone won
//  0: Game is a draw (board full)
// -1: Game is still in progress
int checkWin() {
    // Winning combinations (Indices):
    // Rows: (0,1,2), (3,4,5), (6,7,8)
    // Cols: (0,3,6), (1,4,7), (2,5,8)
    // Diagonals: (0,4,8), (2,4,6)

    // Check Rows
    if (board[0] == board[1] && board[1] == board[2]) return 1;
    if (board[3] == board[4] && board[4] == board[5]) return 1;
    if (board[6] == board[7] && board[7] == board[8]) return 1;

    // Check Columns
    if (board[0] == board[3] && board[3] == board[6]) return 1;
    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;

    // Check Diagonals
    if (board[0] == board[4] && board[4] == board[8]) return 1;
    if (board[2] == board[4] && board[4] == board[6]) return 1;

    // Check for Draw (If board is full and no winner)
    // If any position still holds its original number, the game is not over
    if (board[0] != '1' && board[1] != '2' && board[2] != '3' &&
        board[3] != '4' && board[4] != '5' && board[5] != '6' &&
        board[6] != '7' && board[7] != '8' && board[8] != '9') {
        return 0;
    }

    return -1; // Continue playing
}

int main() {
    int player = 1; // Player 1 starts
    int status = -1; // Game status (-1: running)
    int choice;
    char mark;

    do {
        displayBoard();
        
        // Determine current player (1 or 2) and their mark (X or O)
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        cout << "Player " << player << " (" << mark << "), enter a number: ";
        cin >> choice;

        // Validate move
        // Check if input is 1-9 AND the spot is not already taken by 'X' or 'O'
        if (choice >= 1 && choice <= 9 && board[choice - 1] == (char)(choice + '0')) {
            
            // Update the board
            board[choice - 1] = mark;
            
            // Check if this move won the game
            status = checkWin();
            
            // Switch to the next player only if the move was valid
            player++; 
        } 
        else {
            cout << "Invalid move! Please try again." << endl;
            // Note: We do NOT increment 'player' here, so the same person tries again
            cin.clear(); // Clear error flags if user entered a letter
            cin.ignore(1000, '\n'); // Discard bad input
        }

    } while (status == -1); // Keep looping while game is in progress

    displayBoard(); // Show final board

    if (status == 1) {
        // We incremented 'player' after the winning move, so we decrement to show the winner
        cout << "==> Player " << --player << " wins!" << endl;
    } else {
        cout << "==> Game draw!" << endl;
    }

    return 0;
}