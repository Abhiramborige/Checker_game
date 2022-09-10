#ifndef BOARD_H
#define BOARD_H

#include<vector>
#include<iostream>
#include"./player.cpp"
using namespace std;

class Board{
    public:
    Board(){}
    vector<vector<Pawn*>> board;
    Board(vector<vector<Pawn*>> board){
        this->board=board;
    }
    void printboard(){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                cout<<board[i][j]->name<<" ";
            }
            cout<<endl;
        }
    }
    void place_piece(Pawn *p){
        board[p->x_cordinate][p->y_cordinate]=p;
    }
};

#endif