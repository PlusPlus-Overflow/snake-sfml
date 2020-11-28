#ifndef SNAKE_HEAD_LOGIC_H_
#define SNAKE_HEAD_LOGIC_H_

#include "object_logic.h"
#include "snake_body_logic.h"

namespace snk {

class SnakeHeadLogic : public ObjectLogic {
 public:
  using ObjectLogic::ObjectLogic;
  ~SnakeHeadLogic();

  void Grow();
  void Move(int move);

 private:
  void Flow();

 private:
  SnakeBodyLogic* next_;
};

}  // namespace snk

#endif
