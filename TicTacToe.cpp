#include <iostream>
#include <vector>

std::vector< std::vector<char> > board;
int turn_count = 1;

// Creates 2D vector to represent the game board and initializes it to empty for the start of a game
std::vector< std::vector<char> > CreateBoard()
{
    std::vector< std::vector<char> > arr;

    std::vector<char> vec = {'_', '_', '_'};

    for(int i = 0; i < 3; i++) {
        arr.push_back(vec);
    }

    return arr;
}

// Displays the game board in the terminal
void DisplayBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout<<" "<<board[i][j]<<" ";
        }

        std::cout<<std::endl<<std::endl;
    }

    std::cout<<std::endl;
}

// Takes a location as a vector<int> and updates the board based on which player's turn it is
void PlaceMaker(std::vector<int> location) {
    int x = location[0] - 1;
    int y = location[1] - 1;
    
    if(turn_count % 2 != 0)
    {
        board[x][y] = 'X';
    }
    else {
        board[x][y] = 'O';
    }
    
    DisplayBoard();
}

int main() {
    board = CreateBoard();
    DisplayBoard();
    
    std::vector<int> v = {1, 2};
    std::vector<int> v2 = {2, 3};
    
    PlaceMaker(v);

    turn_count++;

    PlaceMaker(v2);
}