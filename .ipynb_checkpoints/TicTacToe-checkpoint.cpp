#include <iostream>
#include <vector>

std::vector< std::vector<char> > board; 

std::vector< std::vector<char> > CreateBoard()
{
    std::vector< std::vector<char> > arr;

    std::vector<char> vec = {'_', '_', '_'};

    for(int i = 0; i < 3; i++) {
        arr.push_back(vec);
    }

    return arr;
}

void DisplayBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout<<"| "<<board[i][j]<<" |";
        }

        std::cout<<std::endl;
    }
}

int main() {
    board = CreateBoard();
    DisplayBoard();
}