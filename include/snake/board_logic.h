#include "../SFML/System/Vector2.hpp"
#include "../SFML/Graphics.hpp"
#include "object_controller.h"

namespace snk{
class BoardLogic{
  public:
    std::vector<ObjectController>& operator[];
  private:
    std::vector<ObjectController> board_;
    int row_;
    int column_;
    sf::Vector2f chunk_size_;

    BoardLogic(int, int , const sf::VideoMode&);
    sf::Vector2f CalcularTamano(const sf::VideoMode&);
};
}
