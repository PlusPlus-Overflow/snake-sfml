#ifndef _ObjectGraphic_
#define _ObjectGraphic_

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace snk {
class ObjectGraphic : public sf::Drawable {
 public:
  ObjectGraphic();
  ObjectGraphic(const ObjectGraphic&);
  ObjectGraphic(const sf::Texture&, const sf::Vector2f&);
  void operator=(const ObjectGraphic&);

 private:
  sf::Sprite sprite_;

 protected:
  void draw(sf::RenderTarget&, sf::RenderStates) const override;
};
}  // namespace snk

#endif
