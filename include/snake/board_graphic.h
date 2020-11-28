#ifndef _BoardGraphic_
#define _BoardGraphic_

#include <SFML/Graphics/Drawable.hpp>

namespace snk {
class BoardGraphic : public sf::Drawable {
 public:
  BoardGraphic();
  ~BoardGraphic();
  BoardGraphic(const BoardGraphic&);
  void operator=(const BoardGraphic&);
 
 void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};
}  // namespace snk

#endif
