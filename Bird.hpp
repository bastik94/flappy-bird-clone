#include <algoviz/SVG.hpp>

#ifndef BIRD
#define BIRD

using namespace std;

class Bird {
    
  private:
    Image bird;
    SVG *drawing = nullptr;
    double x = 400;
    double y = 500;
    double vy = 0;
    int speed = 5;

  public:

    Bird(SVG &drawing) {
      this->drawing = &drawing;
      bird = Image("img/Bee.svg", x, y, 80, 80, &drawing);
      // bird.setSize(80, 80); - if needed
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

    double getX() {
      return x;
    }
    
    double getY() {
      return y;
    }
};

#endif