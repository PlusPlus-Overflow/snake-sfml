#ifndef _MOVEMENTS_
#define _MOVEMENTS_

#include <map>
#include <SFML/System/Vector2.hpp>

namespace snk {
  enum MOVES { UP,
    DOWN,
    RIGHT,
    LEFT
  };

  std::map<int, sf::Vector2f> MOVES_VECTOR {
    {UP,    sf::Vector2f(0, -1)},
      {DOWN,  sf::Vector2f(0, 1)},
      {RIGHT, sf::Vector2f(1, 0)},
      {LEFT,  sf::Vector2f(-1, 0)},
  };
}

#endif // _MOVEMENTS_
