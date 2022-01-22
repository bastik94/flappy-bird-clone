#include <algoviz/SVG.hpp>

using namespace std;

class ScoreTable {
    
  private:
    Image scoreTable;
    SVG *drawing = nullptr;

  public:

    Score(SVG &drawing) {
      this->drawing = &drawing;
      bird = Image("img/ScoreTable.svg", 500, 500, 100, 100, &drawing);
    }

    void setScore(score) {
      //somwhow show result
    }

    void show(int score) {
      setScore(score);
      scoreTable.show();
    }
    
    void hide() {
      scoreTable.hide();
    }

    double getX() {
      return x;
    }
    
    double getY() {
      return y;
    }
};

#endif