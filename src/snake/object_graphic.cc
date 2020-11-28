#include "../../include/snake/object_graphic.h"

namespace snk {

ObjectGraphic::ObjectGraphic() {
  sprite_.setColor(sf::Color::Black);
  sprite_.setPosition(0, 0);
}

ObjectGraphic::ObjectGraphic(const ObjectGraphic& copy) {
  *this = copy;
}

ObjectGraphic::ObjectGraphic(const sf::Texture& texture, const sf::Vector2f& posicion) {
  sprite_.setPosition(posicion);
  sprite_.setTexture(texture);
}

void ObjectGraphic::operator=(const ObjectGraphic& other) {
  sprite_ = other.sprite_;
}

void ObjectGraphic::draw(sf::RenderTarget& target, sf::RenderStates states) const {
  target.draw(sprite_);
}

}  // namespace snk