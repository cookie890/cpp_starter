#include "PPPheaders.h"

constexpr char P1 = 'X';
constexpr char P2 = 'O';
constexpr char EMPTY = '-';
constexpr int ROWS = 3;
constexpr int COLS = 3;

//a Board is a vector<char>
// v.at(0) represents the zeroth square on the board
// row 0 col 0
using Board = vector<char>;
using Player = char;

void render(Board board);
// get a a valid location on the board;
int getLocation(const Board& board);

// places player's tile at the given location
void place(Player p, int location, Board& board);

// returns true when player has three in a row
bool won(Player p, Board board);

// congratulates player on game well played
void congrats(Player p);

// returns true when no more available spaces to move
bool tie(Board b);

// return the other player whose turn it should be next
Player switchTurn(Player currentPlayer);

void test(Player startPlayer, Board b);

int main(){
   Board board(9, EMPTY);
   Player currentPlayer(P1);
   //test(currentPlayer, board);
   //return 0;
   while(true){
        render(board);
        int location = getLocation(board); 
        place(currentPlayer, location, board);
        if (won(currentPlayer, board)){
            render(board);
            congrats(currentPlayer);
            exit(0);
       } else if (tie(board)){
            render(board);
            cout << "Cat's game" << endl;
            exit(0);
        }
        currentPlayer = switchTurn(currentPlayer);
   }

}

void test(Player startPlayer, Board b){
    place(P1, 0, b);
    place(P2, 1, b);
    place(P1, 8, b);
    render(b);

}

void render(Board board){
    for (int i=0; i < 9; i+=3){
        // print the row
        cout << board.at(i) << " " << board.at(i+1) << " " << board.at(i+2) << endl;
    }
}

int getLocation (const Board& board) {
    int returnlocation;
    cin >> returnlocation;
    return returnlocation;
}

void place(Player p, int location, Board& board){
    board.at(location) = p;
}

bool won(Player p, Board b) {
    for(int i = 0; i < 3; ++i) {
            if(b.at(i) == p && b.at(i + 3) == p && b.at(i + 6) == p) return true;
    }

    for(int i = 0; i < 9; i += 3) {
        if(b.at(i) == p && b.at(i + 1) == p && b.at(i + 2) == p) return true;
    }

    if(b.at(0) == p && b.at(4) == p && b.at(8) == p || b.at(2) == p && b.at(4) == p && b.at(6) == p) return true;

    return false;
}

void congrats(Player p) {
    cout << "Congrats " << p << " you won the game!" << endl; 
}

bool tie(Board b) {
    for (int i = 0; i < 9; i++) {
        if(b.at(i) == EMPTY) return(false);
    }
    return(true);
}

Player switchTurn(Player currentPlayer) {
    if(currentPlayer == P1) return P2;
    else return P1;
}