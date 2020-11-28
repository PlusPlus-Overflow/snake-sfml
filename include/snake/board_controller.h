#ifndef BOARD_CONTROLLER_H_
#define BOARD_CONTROLLER_H_

#include "board_graphic.h"
#include "board_logic.h"

namespace snk {

class BoardController {
 public:
  BoardController();
  BoardController(const BoardLogic& board_logic, const BoardGraphic& board_graphic);
  ~BoardController();

  void SetBoardLogic(const BoardLogic& board_logic);
  void SetBoardGraphic(const BoardGraphic& board_graphic);

  BoardGraphic& GetGraphic();

 private:
  BoardLogic board_logic_;
  BoardGraphic board_graphic_;
};

}  // namespace snk

#endif