#ifndef __OBJECT_LOGIC_H__
#define __OBJECT_LOGIC_H__

namespace snk {

#include <Transformable.hpp>

class ObjectLogic {
  public:
    sf::Transformable transformer;
  public:
    ObjectLogic(const sf::Vector2f& coordinates);
    ObjectLogic(unsigned x = 0, unsigned y = 0);
    ObjectLogic(const ObjectLogic& other);
};

} // namespace snk

#endif
