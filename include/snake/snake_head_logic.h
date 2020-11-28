#ifndef SNAKE_HEAD_LOGIC_H_
#define SNAKE_HEAD_LOGIC_H_

#include <map>

#include "object_logic.h"
#include "snake_body_logic.h"

namespace snk {

enum MOVES { UP,
             DOWN,
             RIGHT,
             LEFT 
};

const std::map<int, sf::Vector2f> MOVES_VECTOR {
  {UP,    sf::Vector2f(0, -1)},
  {DOWN,  sf::Vector2f(0, 1)},
  {RIGHT, sf::Vector2f(1, 0)},
  {LEFT,  sf::Vector2f(-1, 0)},
};

class SnakeHeadLogic : public ObjectLogic {
 public:
  using ObjectLogic::ObjectLogic;
  ~SnakeHeadLogic();

  void Grow();
  void Move(int move);

 private:
  void Flow();

 private:
  SnakeBodyLogic* next_;
}

}  // namespace snk

#endif