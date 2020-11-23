#include "../../include/snake/object_graphic.h"

ObjectGraphic::ObjectGraphic(){
  sprite_.setColor(sf::Color::Black);
  sprite_.setPosition(0,0);
}

ObjectGraphic::ObjectGraphic(const sf::Texture& texture, const sf::Vector2f& posicion) {
  sprite_.setPosition(posicion);
  sprite_.setTexture(texture);
}

void ObjectGraphic::draw(sf::RenderTarget& target, sf::RenderStates states) const {
  target.draw(sprite_);
}
