#include "../../include/snake/board_logic.h"

snk::BoardLogic::BoardLogic() {
  row_ = 0;
  column_ = 0;
  chunk_size_ = sf::Vector2f();
}

snk::BoardLogic::BoardLogic(const BoardLogic& other) {
  *this = other;
}

snk::BoardLogic::BoardLogic(int row, int column, const sf::VideoMode& videomode) {
  row_ = row;
  column_ = column;
  chunk_size_ = CalculateChunck(videomode);
  board_.resize(row_ * column_);
}

sf::Vector2f snk::BoardLogic::CalculateChunck(const sf::VideoMode& videomode) {
  auto anchura = videomode.height / row_;
  auto altura = videomode.width / column_;
  auto minimo = std::min(anchura, altura);
  return sf::Vector2f(minimo, minimo);
}

void snk::BoardLogic::operator=(const BoardLogic& other) {
  row_ = other.row_;
  column_ = other.column_;
  chunk_size_ = other.chunk_size_;
  board_ = other.board_;
}
