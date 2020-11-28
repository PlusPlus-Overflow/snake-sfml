#ifndef _BoardLogic_
#define _BoardLogic_
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>
#include "object_controller.h"

namespace snk{
class BoardLogic{
  public:
    BoardLogic();
    BoardLogic(const BoardLogic&);
    BoardLogic(int, int , const sf::VideoMode&);
    std::vector<ObjectController>& operator[](int);
    void operator = (const BoardLogic&);
  private:
    std::vector<ObjectController> board_;
    int row_;
    int column_;
    sf::Vector2f chunk_size_;

    sf::Vector2f CalcularTamano(const sf::VideoMode&);
};
}

#endif
