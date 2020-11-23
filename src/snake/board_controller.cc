#include "../../include/snake/board_controller.h"

namespace snk {

BoardController::BoardController(const BoardLogic& board_logic, const BoardGraphic& board_graphic) {
  board_logic_ = board_logic;
  board_graphic_ = board_graphic;
}

BoardController::BoardController() {}

BoardController::~BoardController() {}

}  // namespace snk