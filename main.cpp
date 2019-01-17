#include <iostream>
#include <array>

using std::cout;
using std::endl;

int main() {
    enum Piece { none, pawn, knight, bishop, rook, queen, king };

    std::array<std::array<Piece, 8>, 8> board = {};

    // Set pawns
    for (int i = 0; i < 8; ++i) {
        board[1][i] = pawn;
        board[6][i] = pawn;
    }

    // Set knights
    board[0][1] = knight;
    board[0][6] = knight;
    board[7][1] = knight;
    board[7][6] = knight;

    // Set bishops
    board[0][2] = bishop;
    board[0][5] = bishop;
    board[7][2] = bishop;
    board[7][5] = bishop;

    // Set rooks
    board[0][0] = rook;
    board[0][7] = rook;
    board[7][0] = rook;
    board[7][7] = rook;

    // Set queens
    board[0][3] = queen;
    board[7][3] = queen;

    // Set kings
    board[0][4] = king;
    board[7][4] = king;

    for (auto &i : board) {
        for (auto &j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
