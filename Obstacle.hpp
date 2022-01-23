#include <algoviz/SVG.hpp>

#ifndef OBSTACLE
#define OBSTACLE

using namespace std;

class Obstacle {
  private:

    SVG *drawing = nullptr;
    Rect *Upper = nullptr;;
    Rect *Lower = nullptr;;
    int gap = 300;
    int upperHeight = 0;
    int x = 950;
    int upperY = 0;
    int lowerY = 0;
    int width = 40;

    

  public:

    Obstacle(SVG &drawing, int random) {
      this->drawing = &drawing;
      this->Upper = new Rect(x, 0, width, 50 + random, &drawing);
      this->Upper->setFill("green");
      this->lowerY = gap + 50 + random;
      this->upperHeight = 50 + random;
        
      this->Lower = new Rect(x, lowerY, width, 1000 - lowerY, &drawing);
      this->Lower->setFill("green");
    }

    void move() {
        x = x - 5;
        Upper->moveTo(x, 0);
        Lower->moveTo(x, lowerY);
    }
    
    void hide() {
        Upper->hide();
        Lower->hide();
    }
    
    void remove() {
        Upper->hide();
        delete Upper;
        Lower->hide();
        delete Lower;
    }
    
    int getX() {
        return x;
    }
    
    int getUpperHeight() {
        return upperHeight;
    }
    

    int getUpperY() {
      return upperY;
    }

    int getLowerY() {
      return lowerY;
    }

};

#endif