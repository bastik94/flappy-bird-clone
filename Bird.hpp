#include <algoviz/SVG.hpp>
using namespace std;

class Bird {
  private:
    Image bird;
    SVG *drawing = nullptr;
    int x = 200;
    int y = 200;
    int yStep = 10;

    void show() {
      bird.show();
    }

    void hide() {
      bird.hide();
    }
    
    void moveTo() {
    }

  public:

    Bird(SVG &drawing) {
      this->drawing = &drawing;
      this->bird = Image("img/Bird.png", x, y, 40, 40, &drawing);
      // bird.setSize(80, 80); - if needed
    }

    bool moveUp() {
      bird.rotateTo(90);
      bird.moveTo(x, y + yStep);
      bird.rotateTo(-90);
    }

    void moveDown() {
      bird.moveTo(x, y - yStep);
    }

    int getX() {
      return x;
    }
    
    int getY() {
      return y;
    }
};