#include "../../include/snake/board_logic.h"

snk::BoardLogic::BoardLogic(int row, int column, const sf::VideoMode& videomode){
  row_ = row;
  column_ = column;
  chunk_size_ = CalcularTamano(videomode);
}

sf::Vector2f snk::BoardLogic::CalcularTamano(const sf::VideoMode& videomode){
  auto anchura = videomode.height / row_;
  auto altura = videomode.width / column_;
  auto minimo = std::min(anchura, altura);
  return sf::Vector2f(minimo, minimo);
}
