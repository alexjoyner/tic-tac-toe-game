#include ""



class TicTacToe{
  public:
    TicTacToe();
    void play();
    void drawBoard();
  private:
    Player player_O;
    Bot bot_X;
    void initPLDuinoProject();
    void drawBoardLine(const Point& start, const Point& end);
};
