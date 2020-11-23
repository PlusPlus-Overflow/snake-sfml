#ifndef OBJECT_CONTROLLER_H_
#define OBJECT_CONTROLLER_H_

#include "object_graphic.h"
#include "object_logic.h"

namespace snk {

class ObjectController {
 public:
  ObjectController(ObjectLogic*& object_logic, const ObjectGraphic& object_graphic);
  ~ObjectController();

 private:
  ObjectLogic* object_logic_;
  ObjectGraphic object_graphic_;
};

}  // namespace snk

#endif