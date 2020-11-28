#ifndef __OBJECT_LOGIC_H__
#define __OBJECT_LOGIC_H__
#include "../SFML/Graphics/Transformable.hpp"

namespace snk {
class ObjectLogic {
  public:
    sf::Transformable transformer;
  public:
    explicit ObjectLogic(const sf::Vector2f& coordinates);
    explicit ObjectLogic(unsigned x = 0, unsigned y = 0);
    explicit ObjectLogic(const ObjectLogic& other);
};

} // namespace snk

#endif
