#include "../../include/snake/board_controller.h"

namespace snk {

BoardController::BoardController(const BoardLogic& board_logic, const BoardGraphic& board_graphic) {
  board_logic_ = board_logic;
  board_graphic_ = board_graphic;
}

BoardController::BoardController() {}

BoardController::~BoardController() {}

void BoardController::SetBoardLogic(const BoardLogic& board_logic) {
  board_logic_ = board_logic;
}

void BoardController::SetBoardGraphic(const BoardGraphic& board_graphic) {
  board_graphic_ = board_graphic;
}

BoardGraphic& BoardController::GetGraphic() {
  return board_graphic_;
}

}  // namespace snk
