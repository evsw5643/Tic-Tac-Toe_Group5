#include <iostream>

int ** CreateBoard()
{
    int ** arr = 0;

    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }
    return arr;
}

int main() {
    CreateBoard();
}