#ifndef __SNAKE_BODY_LOGIC_H__
#define __SNAKE_BODY_LOGIC_H__

#include"object_logic.h"

namespace snk {

class SnakeBodyLogic : public ObjectLogic {
  private:
    SnakeBodyLogic* next_;
  public:
    SnakeBodyLogic(unsigned x = 0, unsigned y = 0, SnakeBodyLogic* next = NULL);
    SnakeBodyLogic(const sf::Vector2f& coordinates, 
                  SnakeBodyLogic* next =  NULL);
    SnakeBodyLogic(const SnakeBodyLogic& other);
    ~SnakeBodyLogic();
    SnakeBodyLogic* GetNext() const;
    void SetNext(SnakeBodyLogic* next);
    void Grow();
    void Flow(const sf::Transformable& transform);
};

} // namespace snk

#endif
