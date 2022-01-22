#include <algoviz/SVG.hpp>

#ifndef BIRD
#define BIRD

using namespace std;

class Bird {
    
  private:
    Image bird;
    SVG *drawing = nullptr;
    double startX = 400;
    double startY = 500;
    double vy;
    int speed = 5;
    int x, y;

  public:

    Bird(SVG &drawing) {
      this->drawing = &drawing;
      x = startX;
      y = startY;
      bird = Image("img/Bee.svg", x, y, 100, 100, &drawing);
    }

    void moveDown() {
        vy = y + speed;
        y = vy;
        
        bird.moveTo(x, y);
    }
    
    void moveUp() {
        vy = y - 23 * speed;
        y = vy;
        
        bird.rotateTo(-20);
        bird.moveTo(x, y);
        bird.rotateTo(20);
    }

    void center() {
      x = startX;
      y = startY;
      bird.moveTo(x, y);
    }

    double getX() {
      return x;
    }
    
    double getY() {
      return y;
    }
};

#endif