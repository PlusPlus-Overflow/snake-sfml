#include "../../include/snake/object_controller.h"

namespace snk {

ObjectController::ObjectController() {
  object_logic_ = NULL;
}

ObjectController::ObjectController(ObjectLogic*& object_logic, const ObjectGraphic& object_graphic) {
  object_logic_ = object_logic;
  object_graphic_ = object_graphic;
}

ObjectController::~ObjectController() {}

}  // namespace snk