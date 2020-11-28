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

  //TODO: mapeo de coordenadas

 private:
  BoardLogic board_logic_;
  BoardGraphic board_graphic_;
};

}  // namespace snk

#endif