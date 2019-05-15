#include "rockFall.h"
#include "stdlib.h"


/**
 * Create a GameController with player at (0,0) and space for 10 
 * additional objects
 */
GameController::GameController(GameBoard &board_ref)
{
  player = new Player(4, 1);
	objectSize = 1; 
  board = board_ref;
}


RockFall::RockFall()
{
  board = new GameBoard;
	game = new GameController(*board);
}

void GameController::draw(GameBoard &board)
{
	player->draw(board);
  for (int i = 0; i < objectSize; i++)
  {
  }
}

/**
 * Process the update loop for this GameController
 */
void GameController::update(float dt)
{
	player->update(dt); 
  for (int i = 0; i < objectSize; i++)
  {
  }
}