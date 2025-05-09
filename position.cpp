/***********************************************************************
 * Source File:
 *    POSITION
 * Author:
 *    <your name here>
 * Summary:
 *    The position of a piece, the cursor, or a possible move on a chess board
 ************************************************************************/

#include "position.h"
#include <iostream>

/******************************************
 * POSITION
 * constructor for using the texxt based construction
 ******************************************/
Position::Position(const char * s) {
   if (s == nullptr   // null pointer
       || s[0] < 'a'  // less than a
       || s[0] > 'h'  // greater than h
       || s[1] < '1'  // less than 1
       || s[1] > '8') // greater than 8
   {
      colRow = 0xff;  // invalid position hex code
   } else {
      int col = s[0] - 'a'; // subtracts the ASCII value of a to get the index
      int row = s[1] - '1'; // subtracts the ASCII value of 1 to get the index
      set((col << 4) | row);
   }
}

/******************************************
 * SETCOL
 ******************************************/
void Position::setCol(int c) {
   if (c < 0 || c > 7) {
      colRow = 0xff;
      return;
   }

   if (isInvalid()) {
      // Reset row to 0 if currently invalid to build from scratch
      colRow = (c << 4);
   } else {
      // Keep current row, replace column
      colRow = (c << 4) | (colRow & 0x0F);
   }
}

/******************************************
 * SETROW
 ******************************************/
void Position::setRow(int r) {
   if (r < 0 || r > 7) {
      colRow = 0xff;
      return;
   }

   if (isInvalid()) {
      // Reset column to 0 if currently invalid to build from scratch
      colRow = r;
   } else {
      // Keep current column, replace row
      colRow = (colRow & 0xF0) | (r & 0x0F);
   }
}

/******************************************
 * POSITION INSERTION OPERATOR
 ******************************************/
ostream & operator << (ostream & out, const Position & rhs)
{
   out << "error";
   return out;
}

/*************************************
 * POSITION EXTRACTION OPERATOR
 **************************************/
istream & operator >> (istream & in,  Position & rhs)
{
   return in;   
}


