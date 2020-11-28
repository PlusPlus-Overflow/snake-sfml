#include "../../include/snake/snake_head_logic.h"

namespace snk {

SnakeHeadLogic::~SnakeHeadLogic() {
  if (next_ != NULL) delete next_;
}

void SnakeHeadLogic::Move(int move) {
  switch (move) {
    case UP:
      Flow();
      transformer.move(MOVES_VECTOR[UP]);
      break;
    case DOWN:
      Flow();
      transformer.move(MOVES_VECTOR[DOWN]);
      break;
    case LEFT:
      Flow();
      transformer.move(MOVES_VECTOR[LEFT]);
      break;
    case RIGHT:
      Flow();
      transformer.move(MOVES_VECTOR[RIGHT]);
      break;
    default:
      throw "Tecla desconocida";
      break;
  }
}

void SnakeHeadLogic::Grow() {
  if (next_ != NULL) 
    next_->Grow();
  else
    next_ = new SnakeBodyLogic;
}

void SnakeHeadLogic::Flow() {
  if (next_ != NULL) next_->Flow(transformer);
}

}  // namespace snk
