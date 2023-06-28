#include <iostream>
#include <stdio.h>
#include <time.h>

char board[3][3];
static char player = 'X';
static char computer = 'O';

void ResetBoard() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        board[i][j] = ' ';
      }
    }
}

void PrintBoard() {
    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
    std::cout << std::endl;
}

void PlayerMove() {
    bool move_complete = false;
    while (true) {
        int x, y;
        std::cout << "Select a Row: ";
        std::cin >> x;
        
        std::cout << std::endl;
        std::cout << "Select a Column: ";
        std::cin >> y;
        
        if (board[x][y] == ' ') {
            board[x][y] = player;
            break;
        }
        else {
            std::cout << "Invalid Move" << std::endl;
        }
        
    } 
}

void ComputerMove() {
    bool move_made = false;
    int i = 0;
    while (true) {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == computer && board[i][1] == computer && board[i][2] == ' ')
            {
                board[i][2] = computer;
                move_made = true;
                break;
            }
            if (board[i][1] == computer && board[i][2] == computer && board[i][0] == ' ')
            {
                board[i][0] = computer;
                move_made = true;
                break;
            }
            if (board[i][0] == computer && board[i][2] == computer && board[i][1] == ' ')
            {
                board[i][1] = computer;
                move_made = true;
                break;
            }
            if (board[0][i] == computer && board[1][i] == computer && board[2][i] == ' ')
            {
                board[2][i] = computer;
                move_made = true;
                break;
            }
            if (board[1][i] == computer && board[2][i] == computer && board[0][i] == ' ')
            {
                board[0][i] = computer;
                move_made = true;
                break;
            }
            if (board[0][i] == computer && board[2][i] == computer && board[1][i] == ' ')
            {
                board[1][i] = computer;
                move_made = true;
                break;
            } 
            

            if (board[1][1] == computer && board[2][2] == computer && board[0][0] == ' ')
            {
                board[0][0] = computer;
                move_made = true;
                break;
            }
            if (board[0][0] == computer && board[2][2] == computer && board[1][1] == ' ')
            {
                board[1][1] = computer;
                move_made = true;
                break;
            }
            if (board[0][0] == computer && board[1][1] == computer && board[2][2] == ' ')
            {
                board[2][2] = computer;
                move_made = true;
                break;
            }

            if (board[0][2] == computer && board[1][1] == computer && board[2][0] == ' ')
            {
                board[2][0] = computer;
                move_made = true;
                break;
            }
            if (board[1][1] == computer && board[2][0] == computer && board[0][2] == ' ')
            {
                board[0][2] = computer;
                move_made = true;
                break;
            }
            if (board[0][2] == computer && board[2][0] == computer && board[1][1] == ' ')
            {
                board[1][1] = computer;
                move_made = true;
                break;
            }
        }
        
        if (move_made == true)
        {
            break;
        }
        

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == ' ')
            {
                board[i][2] = computer;
                move_made = true;
                break;
            }
            if (board[i][1] == player && board[i][2] == player && board[i][0] == ' ')
            {
                board[i][0] = computer;
                move_made = true;
                break;
            }
            if (board[i][0] == player && board[i][2] == player && board[i][1] == ' ')
            {
                board[i][1] = computer;
                move_made = true;
                break;
            }
            if (board[0][i] == player && board[1][i] == player && board[2][i] == ' ')
            {
                board[2][i] = computer;
                move_made = true;
                break;
            }
            if (board[1][i] == player && board[2][i] == player && board[0][i] == ' ')
            {
                board[0][i] = computer;
                move_made = true;
                break;
            }
            if (board[0][i] == player && board[2][i] == player && board[1][i] == ' ')
            {
                board[1][i] = computer;
                move_made = true;
                break;
            } 
            

            if (board[1][1] == player && board[2][2] == player && board[0][0] == ' ')
            {
                board[0][0] = computer;
                move_made = true;
                break;
            }
            if (board[0][0] == player && board[2][2] == player && board[1][1] == ' ')
            {
                board[1][1] = computer;
                move_made = true;
                break;
            }
            if (board[0][0] == player && board[1][1] == player && board[2][2] == ' ')
            {
                board[2][2] = computer;
                move_made = true;
                break;
            }

            if (board[0][2] == player && board[1][1] == player && board[2][0] == ' ')
            {
                board[2][0] = computer;
                move_made = true;
                break;
            }
            if (board[1][1] == player && board[2][0] == player && board[0][2] == ' ')
            {
                board[0][2] = computer;
                move_made = true;
                break;
            }
            if (board[0][2] == player && board[2][0] == player && board[1][1] == ' ')
            {
                board[1][1] = computer;
                move_made = true;
                break;    
            }
        
        }

        if (move_made == true)
        {
            break;
        }
        
        srand(time(0));
        int x = rand() % 3;
        int y = rand() % 3; 

        if (board[x][y] == ' ')
        {
            board[x][y] = computer;
            break;
        }
        
    }
}

char Winner() {
    for (int i = 0; i < 3; i++)
    {        
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    
    if (board[1][1] == board[2][2] && board[1][1] == board[0][0])
    {
        return board[1][1];
    }
    
                
    if (board[2][0] == board[1][1] && board[2][0] == board[0][2])
    {
        return board[2][0];
    }
    return ' ';
}

int main() {

    ResetBoard();
    PrintBoard();
    char winner = ' ';
    int free_spaces = 9;
    char win;
    while (true) {
        
        PlayerMove();
        free_spaces = free_spaces - 1;
        if (free_spaces != 0) {
            ComputerMove();
            free_spaces = free_spaces - 1;
        }
        PrintBoard();
        if (free_spaces == 0) {
            break;
        }

        win = Winner();
        if (win == player) {
            std::cout << "Player Won!" << std::endl;
            exit(0);
        }

        if(win == computer) {
            std::cout << "Computer Won!" << std::endl;
            exit(0);
        }
    }
    return 0;
}