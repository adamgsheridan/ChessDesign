/***********************************************************************
 * Header File:
 *    TEST MOVE 
 * Author:
 *    <your name here>
 * Summary:
 *    test the Move class
 ************************************************************************/


#include "testMove.h"
#include "move.h"
#include <cassert>

#include <iostream>
using namespace std;

 /*************************************
  * Constructor : default
  * Input: 
  * Output: source=INVALID
  *         dest  =INVALID
  **************************************/
void TestMove::constructor_default() 
{
   //setup
   //exercise
   Move move;
   //verify
   assert(move.source == INVALID);
   assert(move.dest == INVALID);
   //teardown
}

 /*************************************
  * CONSTRUCTOR : standard string move
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::constructString_simple()
{

   //setup
   //exercise
   Move move("e5e6");

   //verify
   cout<<"move.sou " << move.source.getCol();
   assert(move.source == 4);
   assert(move.source.getRow() == 4);
   assert(move.dest.getCol() == 4);
   assert(move.dest.getRow() == 5);
   assert(move.moveType == Move::MoveType::MOVE);
   //teardown
}

 /*************************************
  * READ simple move 
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::read_simple()
{
   //setup

   //exercise
   Move move("e5e6");

   //verify
   assert(move.source.getCol() == 4);
   assert(move.source.getRow() == 4);
   assert(move.dest.getCol() == 4);
   assert(move.dest.getRow() == 5);
   assert(move.moveType == Move::MOVE);

   //teardown
}

 /*************************************
  * READ capture move 
  * Input:  e5d6r
  * Output: source=4,4
  *         dest  =3,5
  *         type  =MOVE
  *         capture=ROOK
  **************************************/
void TestMove::read_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ enpassant move 
  * Input:  e5f6E
  * Output: source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  **************************************/
void TestMove::read_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ king side castle
  * Input:  e1g1c
  * Output: source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  **************************************/
void TestMove::read_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * READ queen side castle
  * Input:  e1c1C
  * Output: source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN
  **************************************/
void TestMove::read_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN simple move
  * Input:  e5e6
  * Output: source=4,4
  *         dest  =4,5
  *         type  =MOVE
  **************************************/
void TestMove::assign_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN capture move
  * Input:  e5d6r
  * Output: source=4,4
  *         dest  =3,5
  *         type  =MOVE
  *         capture=ROOK
  **************************************/
void TestMove::assign_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN enpassant move
  * Input:  e5f6E
  * Output: source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  **************************************/
void TestMove::assign_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN king side castle
  * Input:  e1g1c
  * Output: source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  **************************************/
void TestMove::assign_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * ASSIGN queen side castle
  * Input:  e1c1C
  * Output: source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN
  **************************************/
void TestMove::assign_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT simple move
  * Input : source=4,4
  *         dest  =4,5
  *         type  =MOVE
  * Output:  e5e6
  **************************************/
void TestMove::getText_simple()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT capture
  * Input : source=4,4
  *         dest  =4,5
  *         type  =MOVE
  *         capture=ROOK
  * Output:  e5e6r
  **************************************/
void TestMove::getText_capture()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT en passant
  * Input : source=4,4
  *         dest  =5,5
  *         type  =ENPASSANT
  *         capture=PAWN
  * Output:  e5f6E
  **************************************/
void TestMove::getText_enpassant()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT king side castle
  * Input : source=4,0
  *         dest  =6,0
  *         type  =CASTLE_KING
  * Output:  e1g1c
  **************************************/
void TestMove::getText_castleKing()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * GET TEXT queen side castle
  * Input : source=4,0
  *         dest  =2,0
  *         type  =CASTLE_QUEEN  
  * Output:  e1c1C
  **************************************/
void TestMove::getText_castleQueen()
{
   assertUnit(NOT_YET_IMPLEMENTED);
}

 /*************************************
  * LETTER FROM PIECE TYPE space
  * Input :  SPACE
  * Output:  ' '
  **************************************/void TestMove::letterFromPieceType_space()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(SPACE);

     // verify
     assert(result == ' ');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE pawn
   * Input : PAWN
   * Output:  'p'
   **************************************/
  void TestMove::letterFromPieceType_pawn()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(PAWN);

     // verify
     assert(result == 'p');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE bishop
   * Input : BISHOP
   * Output:  'b'
   **************************************/
  void TestMove::letterFromPieceType_bishop()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(BISHOP);

     // verify
     assert(result == 'b');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE knight
   * Input : KNIGHT
   * Output:  'n'
   **************************************/
  void TestMove::letterFromPieceType_knight()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(KNIGHT);

     // verify
     assert(result == 'n');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE rook
   * Input : ROOK
   * Output:  'r'
   **************************************/
  void TestMove::letterFromPieceType_rook()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(ROOK);

     // verify
     assert(result == 'r');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE queen
   * Input : QUEEN
   * Output:  'q'
   **************************************/
  void TestMove::letterFromPieceType_queen()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(QUEEN);

     // verify
     assert(result == 'q');

     // teardown
  }

  /*************************************
   * LETTER FROM PIECE TYPE king
   * Input : KING
   * Output:  'k'
   **************************************/
  void TestMove::letterFromPieceType_king()
  {
     // setup
     Move move;

     // exercise
     char result = move.letterFromPieceType(KING);

     // verify
     assert(result == 'k');

     // teardown
  }


 /*************************************
  * PIECE TYPE FROM LETTER pawn
  * Input : 'p'
  * Output:  PAWN
  **************************************/
  void TestMove::pieceTypeFromLetter_pawn()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('p');

     // verify
     assert(result == PAWN);

     // teardown
  }

  /*************************************
   * PIECE TYPE FROM LETTER bishop
   * Input : 'b'
   * Output:  BISHOP
   **************************************/
  void TestMove::pieceTypeFromLetter_bishop()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('b');

     // verify
     assert(result == BISHOP);

     // teardown
  }

  /*************************************
   * PIECE TYPE FROM LETTER knight
   * Input : 'n'
   * Output:  KNIGHT
   **************************************/
  void TestMove::pieceTypeFromLetter_knight()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('n');

     // verify
     assert(result == KNIGHT);

     // teardown
  }

  /*************************************
   * PIECE TYPE FROM LETTER rook
   * Input : 'r'
   * Output:  ROOK
   **************************************/
  void TestMove::pieceTypeFromLetter_rook()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('r');

     // verify
     assert(result == ROOK);

     // teardown
  }

  /*************************************
   * PIECE TYPE FROM LETTER queen
   * Input : 'q'
   * Output:  QUEEN
   **************************************/
  void TestMove::pieceTypeFromLetter_queen()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('q');

     // verify
     assert(result == QUEEN);

     // teardown
  }

  /*************************************
   * PIECE TYPE FROM LETTER king
   * Input : 'k'
   * Output:  KING
   **************************************/
  void TestMove::pieceTypeFromLetter_king()
  {
     // setup
     Move move;

     // exercise
     PieceType result = move.pieceTypeFromLetter('k');

     // verify
     assert(result == KING);

     // teardown
  }

 /*************************************
  * EQUAL - NOT
  * Input : b2b4 == b2b5
  * Output: false
  **************************************/
  void TestMove::equal_not()
  {
     // setup
     Move move1("b2b4");
     Move move2("b2b5");

     // exercise
     bool result = (move1 == move2);

     // verify
     cout << (result == false) << endl << result << endl;

     // teardown
  }

  /*************************************
   * EQUAL - EQUALS
   * Input : b2b4 == b2b4
   * Output: true
   **************************************/
  void TestMove::equal_equals()
  {
     // setup
     Move move1("b2b4");
     Move move2("b2b4");

     // exercise
     bool result = (move1 == move2);

     // verify
     assert(result == true);

     // teardown
  }

  /*************************************
   * LESS THAN - LESS THAN
   * Input : b2b2 < b2b4
   * Output: false
   *    Note that the less-than operator is needed
   *    so std::set<T> can sort the elements. Thus,
   *    any T in a set must define less-than. In this
   *    case, I defined it according to the
   *     destination's Position's location.
   **************************************/
  void TestMove::lessthan_lessthan()
  {
     // setup
     Move move1("b2b2");
     Move move2("b2b4");

     // exercise
     bool result = (move1 < move2);

     // verify
     assert(result == false);

     // teardown
  }

  /*************************************
   * LESS THAN - EQUALS
   * Input : b2b4 < b2b4
   * Output: false
   **************************************/
  void TestMove::lessthan_equals()
  {
     // setup
     Move move1("b2b4");
     Move move2("b2b4");

     // exercise
     bool result = (move1 < move2);

     // verify
     assert(result == false);

     // teardown
  }

  /*************************************
   * LESS THAN - GREATAER THAN
   * Input : b2b4 < b2b2
   * Output: false
   **************************************/
  void TestMove::lessthan_greaterthan()
  {
     // setup
     Move move1("b2b4");
     Move move2("b2b2");

     // exercise
     bool result = (move1 < move2);

     // verify
     assert(result == false);

     // teardown
  }