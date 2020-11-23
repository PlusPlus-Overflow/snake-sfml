#include "../../include/snake/snake_head_logic.h"

namespace snk {

SnakeHeadLogic::~SnakeHeadLogic() {
  if (next_ != NULL) delete next_;
}

void SnakeHeadLogic::Move(int move) {
  switch (move) {
    case UP:
      Flow();
      this->transformer.move(MOVES_VECTOR[UP]);
      break;
    case DOWN:
      Flow();
      this->transformer.move(MOVES_VECTOR[DOWN]);
      break;
    case LEFT:
      Flow();
      this->transformer.move(MOVES_VECTOR[LEFT]);
      break;
    case RIGHT:
      Flow();
      this->transformer.move(MOVES_VECTOR[RIGHT]);
      break;
    default:
      static_assert(false, "Unkown movement");
      break;
  }
}

void SnakeHeadLogic::Flow() {
  if (next_ != NULL) next_->Flow();
}

}  // namespace snk
