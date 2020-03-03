#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuTest.h"

/*
---------------------------------
Tests - Grant
---------------------------------
*/

void TestPawnMovement(CuTest* tc)
{
	char initial[2][8][8] = {
	{
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	char expected[2][8][8] = {
	{
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	compute('1', 0, 0, 1, 0, 0, initial);
	
	int i, j, k;
	
	//Compare result with expected chess board
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			for (k = 0; k < 8; k++) {
				CuAssertTrue(tc, (initial[i][j][k] == expected[i][j][k]));
			}
		}
	}
}


/*
---------------------------------
Tests - Matthew
---------------------------------
*/



/*
---------------------------------
Tests - Zachary
---------------------------------
*/
void TestRookVertMovement(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'5',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	char expected[2][8][8] = {
	{
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	compute('5', 0, 0, 7, 0, 0, initial);


        int i, j, k;

        //Compare result with expected chess board
        for (i = 0; i < 2; i++) {
              	for (j = 0; j < 8; j++) {
                	for (k = 0; k < 8; k++) {
                                CuAssertTrue(tc, (initial[i][j][k] == expected[i][j][k]));
                        }
                }
       }
}
void TestRookHozMovement(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'5',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	char expected[2][8][8] = {
	{
	{' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	compute('5', 0, 0, 0, 7, 0, initial);


        int i, j, k;

        //Compare result with expected chess board
        for (i = 0; i < 2; i++) {
              	for (j = 0; j < 8; j++) {
                	for (k = 0; k < 8; k++) {
                                CuAssertTrue(tc, (initial[i][j][k] == expected[i][j][k]));
                        }
                }
       }
}
void TestRookPieceTaken(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ',' ',' ',' ',' ','2'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	char expected[2][8][8] = {
	{
	{' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	compute('5', 0, 0, 0, 7, 0, initial);


        int i, j, k;

        //Compare result with expected chess board
        for (i = 0; i < 2; i++) {
              	for (j = 0; j < 8; j++) {
                	for (k = 0; k < 8; k++) {
                                CuAssertTrue(tc, (initial[i][j][k] == expected[i][j][k]));
                        }
                }
       }
}
void TestRookSelfTaken(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ',' ',' ',' ',' ','2'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	char expected[2][8][8] = {
	{
	{' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	compute('5', 0, 0, 0, 7, 0, initial);


        int i, j, k;

        //Compare result with expected chess board
        for (i = 0; i < 2; i++) {
              	for (j = 0; j < 8; j++) {
                	for (k = 0; k < 8; k++) {
                                CuAssertTrue(tc, (initial[i][j][k] == expected[i][j][k]));
                        }
                }
       }
}
void TestRookCantJump(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ','1',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ','1',' ',' ',' ','2'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	CuAssertTrue(tc,compute('5', 0, 0, 0, 7, 0, initial)==1);//assert horizontally
	CuAssertTrue(tc,compute('5', 0, 0, 7, 0, 0, initial)==1);//assert vertically

}
void TestRookCantOverrun(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ','1',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ','1',' ',' ',' ','2'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	CuAssertTrue(tc,compute('5', 0, 0, 0, 3, 0, initial)==1);//assert horizontally
	CuAssertTrue(tc,compute('5', 0, 0, 3, 0, 0, initial)==1);//assert vertically
}
void TestRookNotRook(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'1',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ',' ',' ',' ',' ','2'},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	CuAssertTrue(tc,compute('5', 0, 0, 0, 3, 0, initial)==1);//assert horizontally
	CuAssertTrue(tc,compute('5', 0, 0, 3, 0, 0, initial)==1);//assert vertically
}
void TestRookInvalidMove(CuTest* tc){
	
	char initial[2][8][8] = {
	{
	{'5',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	},
	{
	{'1',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	}
	};

	CuAssertTrue(tc,compute('5', 0, 0, 3, 3, 0, initial)==1);//assert horizontally
}



/*
---------------------------------
Tests - Gavin
---------------------------------
*/

/*
---------------------------------
Compile Test Suite
---------------------------------
*/

CuSuite* CuGetSuite(void)
{
	CuSuite* suite = CuSuiteNew();

	//Unit Tests - Grant
	SUITE_ADD_TEST(suite, TestPawnMovement);

	
	//Unit Tests - Matthew

	
	//Unit Tests - Zachary
	SUITE_ADD_TEST(suite,TestRookVertMovement);
	SUITE_ADD_TEST(suite,TestRookHozMovement);
	SUITE_ADD_TEST(suite,TestRookPieceTaken);
	SUITE_ADD_TEST(suite,TestRookSelfTaken);
	SUITE_ADD_TEST(suite,TestRookCantOverrun);
	SUITE_ADD_TEST(suite,TestRookCantJump);
	SUITE_ADD_TEST(suite,TestRookNotRook);
	SUITE_ADD_TEST(suite,TestRookInvalidMove);

	
	//Unit Tests - Gavin


	return suite;
}
