#include <SFML/Graphics.hpp>
#include <iostream>
#include "../../include/snake/apple_logic.h"
#include "../../include/snake/board_controller.h"
#include "../../include/snake/board_graphic.h"
#include "../../include/snake/board_logic.h"
#include "../../include/snake/object_controller.h"
#include "../../include/snake/object_graphic.h"
#include "../../include/snake/object_logic.h"
#include "../../include//snake/snake_head_logic.h"

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
  snk::BoardGraphic graphic;
  snk::BoardLogic logic(10, 10, sf::VideoMode(800, 600));
  snk::BoardController board(logic, graphic);
  window.draw(board.GetGraphic());
  return 0;
}