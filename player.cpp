#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<vector>
#include"board.cpp"
using namespace std;

class Pawn:public Player{
    public:
    string name;
    int x_cordinate;
    int y_cordinate;
    Pawn(int x_cordinate, int y_cordinate){
        this->x_cordinate=x_cordinate;
        this->y_cordinate=y_cordinate;
    }
    void check_boundary_case(int row, int col) throw (char *){
        if(row>=5 or row <0 or col>=5 or col<0){
            throw "Boundary Exception raised !";
        }
    }
    
    void self_kill_case(int to_move_row, int to_move_col) throw(char*){
        for(int i=0; i<5; i++){
            if(store_pos[i]->y_cordinate == to_move_col and store_pos[i]->x_cordinate == to_move_row ){
                throw "Self kill is not possible !";
            }
        }
    } 

    void move(char direction){
        try{
            if(direction=='L'){
                x_cordinate--;
            }

            if(direction=='R'){
                x_cordinate--;
            }

            if(direction=='U'){
                y_cordinate++;
            }

            if(direction=='D'){
                y_cordinate--;
            }
            check_boundary_case(x_cordinate, y_cordinate);
        }
        catch(char* err){
            cout<<err<<endl;
        }
    }

};

class Player:public Board{
    public:
    vector<Pawn*> store_pos;
    Player(vector<pair<string,pair<int, int>>> positions){

    }
    void place_initial_positions(){
        for(int i=0; i<5; i++){
            place_piece(store_pos[i]);
        }
    }
};


#endif