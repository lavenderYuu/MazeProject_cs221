#include <iostream>

#include "DrawMaze.h"
using namespace std;

int main() {
    // set rng seed for choose_neighbour

    // srand(7);  // random seed for choosing neighbours
    HexBoard board(5);
    // board.generate_maze({0, 0}, 0.5);
    // PNG output = DrawMaze::draw_maze(board, 20, "none");
    // output.writeToFile("Minemaze_r5.png");

    // srand(10);
    // // srand(7);

    // create board
    // HexBoard board(3);

    // size of hexagon for drawing
    int size = 20;

    board.generate_maze({0, 0}, 0.5);

    PNG output = DrawMaze::draw_maze(board, size, "none");
    output.writeToFile("maze.png");

    output = DrawMaze::draw_maze(board, size, "path");
    output.writeToFile("maze coloured based on path distance.png");

    board.solve_maze();

    output = DrawMaze::draw_solution(board, size, "none");
    output.writeToFile("maze with solutions.png");

    // cout << board.longest_path_dist << endl;
    // cout << board.solution.size() << endl;

    // output = DrawMaze::draw_solution(board, size, "path");
    // output.writeToFile("maze with solutions coloured based on path distance.png");
}
