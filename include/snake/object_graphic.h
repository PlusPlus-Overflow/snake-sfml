#include "../../include/SFML/Graphics/Sprite.hpp"
#include "../../include/SFML/Graphics/Drawable.hpp"

class ObjectGraphic : public sf::Drawable{
  public:
    ObjectGraphic();
    ObjectGraphic(const sf::Texture&, const sf::Vector2f&);
  private:
    sf::Sprite sprite_;
  protected:
    void draw(sf::RenderTarget&, sf::RenderStates) const override;
};
