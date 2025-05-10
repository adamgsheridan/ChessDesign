/***********************************************************************
 * Source File:
 *    TEST
 * Author:
 *    Br. Helfrich
 * Summary:
 *    The test runner for all the unit tests
 ************************************************************************/

#include "test.h"
#include "testPosition.h"
#include "testBoard.h"
#include "testMove.h"


#include "piece.h"        // for PIECE and company


/*****************************************************************
 * TEST RUNNER
 * Runs all the unit tests
 ****************************************************************/
void testRunner()
{
   // unit tests
<<<<<<< Updated upstream
   PositionTest().run();
//   TestMove().run();
   //TestBoard().run();
=======
   //PositionTest().run();
   TestMove().run();
   TestBoard().run();
>>>>>>> Stashed changes
}
