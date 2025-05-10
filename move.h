/***********************************************************************  
* Header File:  
*    MOVE   
* Author:  
*    <your name here>  
* Summary:  
*    Everything we need to know about a single chess move  
************************************************************************/  

#pragma once  

#include <string>  
#include "position.h"  // Every move has two Positions as attributes  
#include "pieceType.h" // A piece type  
using namespace std;

class TestMove;  
class TestBoard;  

/***************************************************  
* MOVE  
* One move across the board  
***************************************************/  
class Move  
{  
public:  
  enum MoveType { MOVE, ENPASSANT, CASTLE_KING, CASTLE_QUEEN, MOVE_ERROR };  

  friend TestMove;  
  friend TestBoard;  

  // constructor  
  Move();  
  Move(string s);  


  bool operator<(const Move& rhs) const {
     if (dest.getRow() < rhs.dest.getRow()) {
        return true;
     }
     else if (dest.getRow() == rhs.dest.getRow()) {
        return dest.getCol() < rhs.dest.getCol();
     }
     else {
        return false;
     }
  }

  bool operator==(const Move& rhs) const
  {
     return source == rhs.source && dest == rhs.dest;
  }

private:  
   char letterFromPieceType(PieceType pt) const
   {
      switch (pt)
      {
      case PAWN:   return 'p';
      case ROOK:   return 'r';
      case KNIGHT: return 'n';
      case BISHOP: return 'b';
      case QUEEN:  return 'q';
      case KING:   return 'k';
      case SPACE:  return ' ';
      default:     return '?';
      }
   }

   PieceType pieceTypeFromLetter(char letter) const
   {
      switch (letter)
      {
      case 'p': return PAWN;
      case 'r': return ROOK;
      case 'n': return KNIGHT;
      case 'b': return BISHOP;
      case 'q': return QUEEN;
      case 'k': return KING;
      case ' ': return SPACE;
      default:  return SPACE;
      }
   }
  Position  source;    // where the move originated from  
  Position  dest;      // where the move finished  
  PieceType promote;   // piece to be promoted to  
  PieceType capture;   // did a capture happen this move?  
  MoveType  moveType;  // what type of move is this?  
  bool      isWhite;   // whose turn is it anyway?  
  string    text;      // what is the textual version of the move?  
};
