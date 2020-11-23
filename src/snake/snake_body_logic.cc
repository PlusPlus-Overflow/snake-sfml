#include "../../include/snake/snake_body_logic.h"

namespace snk {

SnakeBodyLogic::SnakeBodyLogic(unsigned x, unsigned y, 
                              SnakeBodyLogic* next = NULL) :
  ObjectLogic(x, y),
  next_(next)
  {}

SnakeBodyLogic::SnakeBodyLogic(const sf::Vector2f& coordinates, 
                              SnakeBodyLogic* next =  NULL) :
  ObjectLogic(coordinates),
  next_(next)
  {}

SnakeBodyLogic::SnakeBodyLogic(const SnakeBodyLogic& other) :
  ObjectLogic(other.transformer.getPosition()),
  next_(other.GetNext())
  {}

SnakeBodyLogic::~SnakeBodyLogic() {
  if (next_ != NULL) {
    delete next_;
  }
  next_ = NULL;
}

SnakeBodyLogic* SnakeBodyLogic::GetNext() const {
  return next_;
}

void SnakeBodyLogic::SetNext(SnakeBodyLogic* next) {
  next_ = next;
}

void SnakeBodyLogic::Grow() {
  if (next_ == NULL) {
    next_ = new SnakeBodyLogic();
  } else {
    next_->Grow();
  }
}

void SnakeBodyLogic::Flow(const sf::Transformable& transform) {
  if (next_ != NULL) {
    next_->Flow(transformer);
  }
  transformer = transform;
}

} // namespace snk
