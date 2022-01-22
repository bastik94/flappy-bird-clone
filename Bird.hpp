#include <algoviz/SVG.hpp>

#ifndef BIRD
#define BIRD

using namespace std;

class Bird {
    
  private:
    Image bird;
    SVG *drawing = nullptr;
    int x, y ,vy;
    double startX = 400;
    double startY = 500;
    int speed = 5;
    int birdBigSize = 500;
    int birdNormalSize = 100;

  public:

    Bird(SVG &drawing) {
      this->drawing = &drawing;
      x = startX;
      y = startY;
      bird = Image("img/Bee.svg", x, y, birdBigSize, birdBigSize, &drawing);
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

    void setNormalSize() {
      bird.setSize(birdNormalSize, birdNormalSize);
    }

};

#endif