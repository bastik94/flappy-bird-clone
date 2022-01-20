#include <algoviz/SVG.hpp>
using namespace std;

class Obstacle {
  private:

    SVG *drawing = nullptr;
    int x;
    int yTop;
    int yBottom;
    int xStep = 10;

    void remove() {

    }

  public:

    Obstacle(SVG &drawing) {
      this->drawing = &drawing;
    }

    void move() {

    }

    int getX() {
      return x;
    }

    int getYTop() {
      return yTop;
    }

    int getYBotton() {
      return yBottom;
    }

};