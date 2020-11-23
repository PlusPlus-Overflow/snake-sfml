#ifndef _ObjectGraphic_
#define _ObjectGraphic_

#include "../../include/SFML/Graphics/Sprite.hpp"
#include "../../include/SFML/Graphics/Drawable.hpp"

class ObjectGraphic : public sf::Drawable{
  public:
    ObjectGraphic();
    ObjectGraphic(const ObjectGraphic&);
    ObjectGraphic(const sf::Texture&, const sf::Vector2f&);
    void operator = (const ObjectGraphic&);
  private:
    sf::Sprite sprite_;
  protected:
    void draw(sf::RenderTarget&, sf::RenderStates) const override;
};

#endif
