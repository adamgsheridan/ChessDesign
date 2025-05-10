/***********************************************************************
 * Source File:
 *    MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    Everything we need to know about a single chess move
 ************************************************************************/

#include "move.h"
#include "pieceType.h"
#include <cassert>
#include <iostream>
#include <sstream>

using namespace std;

/***************************************************
 * MOVE : DEFAULT CONSTRUCTOR
 ***************************************************/
Move::Move()
{
   dest = INVALID;
   source = INVALID;
}

Move::Move(string s)
{
   //
   dest     = s.substr(2, 2);
   source   = s.substr(0, 2);
   moveType = MOVE;
}



