#include "../../include/snake/object_logic.h"

namespace snk {

ObjectLogic::ObjectLogic(const sf::Vector2f& coordinates) :
  transformer()
  {
    transformer.setPosition(coordinates);
  }

ObjectLogic::ObjectLogic(unsigned x, unsigned y) :
  transformer()
  {
    transformer.setPosition(x, y);
  }

ObjectLogic::ObjectLogic(const ObjectLogic& other) :
  transformer(other.transformer)
  {}

} // namespace snk
