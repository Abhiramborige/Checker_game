
#include<iostream>
#include<vector>
#include"./board.cpp"
#include"./player.cpp"
using namespace std;


class Game{

};

int main(){
    Board b();
    vector<pair<string,pair<int, int>>> positions1={
        {"A1",{0,0}},
        {"A2",{1,0}},
        {"A3",{2,0}},
        {"A4",{3,0}},
        {"A5",{4,0}}
    };
    vector<pair<string,pair<int, int>>> positions2={
        {"B1",{0,4}},
        {"B2",{1,4}},
        {"B3",{2,4}},
        {"B4",{3,4}},
        {"B5",{4,4}}
    };
    Player A(positions1);
    Player B(positions2);

    while(true){
        string p1,p2;
        char direction1, direction2;
        cin>>p1>>direction1;
        cin>>p2>>direction2;
        
    }
}