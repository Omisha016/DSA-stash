//
//  RatInTheMaze.cpp
//  Recursion
//
//  Created by Omisha Gupta on 23/07/23.
//

#include <iostream>
#include <vector>

using namespace std;

void mazesolve(int maze[][4], int visited[][4], vector<string>& moves, int* x, int* y) {
    if ((*x == 3 && *y == 3) || *x < 0 || *y < 0 || *x >= 4 || *y >= 4 || visited[*x][*y] == 1)
        return;

    visited[*x][*y] = 1;

    if (*x + 1 < 4 && maze[*x + 1][*y] == 1 && visited[*x + 1][*y] != 1) {
        *x += 1;
        moves.push_back("D");
    }
    else if (*y + 1 < 4 && maze[*x][*y + 1] == 1 && visited[*x][*y + 1] != 1) {
        *y += 1;
        moves.push_back("R");
    }
    else if (*x - 1 >= 0 && maze[*x - 1][*y] == 1 && visited[*x - 1][*y] != 1) {
        *x -= 1;
        moves.push_back("U");
    }
    else if (*y - 1 >= 0 && maze[*x][*y - 1] == 1 && visited[*x][*y - 1] != 1) {
        *y -= 1;
        moves.push_back("L");
    }

    mazesolve(maze, visited, moves, x, y);
}

int main() {
    int maze[4][4] = { {1, 0, 0, 0}, {1, 0, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1} };
    int visited[4][4] = {0};
    int x = 0;
    int y = 0;
    vector<string> moves;
    mazesolve(maze, visited, moves, &x, &y);
    
    if(x==3 && y==3)
    {
        for (auto i : moves) {
            cout << i << " ";
        }
        cout << endl;
    }
    else
        cout<<"Cannot reach the goal"<<endl;
    
    return 0;
}
