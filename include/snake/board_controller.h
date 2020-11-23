#ifndef BOARD_CONTROLLER_H_
#define BOARD_CONTROLLER_H_

#include "board-graphic.h"
#include "board-logic.h"

namespace snk {

class BoardController {
 public:
  BoardController();
  BoardController(const BoardLogic& board_logic, const BoardGraphic& board_graphic);
  ~BoardController();

 private:
  BoardLogic board_logic_;
  BoardGraphic board_graphic_;
};

}  // namespace snk

#endif