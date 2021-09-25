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

std::vector<int> GetPlayerChoice() {
    int row;
    int col;
    std::vector<int> v;
    
    std::cout<<"Pick a row (1, 2, or 3): ";
    std::cin>>row;
    std::cout<<std::endl<<"Pick a column (1, 2, or 3): ";
    std::cin>>col;
    std::cout<<std::endl;

    v.push_back(row);
    v.push_back(col);
    
    return v;
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
    
    turn_count++;
    DisplayBoard();
}

int main() {
    board = CreateBoard();
    DisplayBoard();
    
    while(turn_count < 10) {
        PlaceMaker(GetPlayerChoice());
    }
    
    turn_count = 0;
}