/***********************************************************************************************************************
File: main.c                                                                

Description:
Container for the Cprimer "Server" application firmware.  
***********************************************************************************************************************/

#include "configuration.h"

#ifndef SOLUTION
/***********************************************************************************************************************
Global variable definitions with scope across entire project.
All Global variable names shall start with "G_"
***********************************************************************************************************************/
/* New variables */

/*--------------------------------------------------------------------------------------------------------------------*/
/* External global variables defined in other files (must indicate which file they are defined in) */


/***********************************************************************************************************************
Global variable definitions with scope limited to this local application.
Variable names shall start with "Main_" and be declared as static.
***********************************************************************************************************************/
static u8 Main_u8Servers = 0;          /* Number of people slinging drinks*/
/***********************************************************************************************************************
Main Program
***********************************************************************************************************************/

void main(void)
{
  u32 u32UselessVariableForExample;
  u32 au32BigArray[] = {5,4,3,2,1};
  DrinkType aeDrinkArray[3] = {BEER, SHOOTER};
  
  u8 aString[] = "This is an array of u8 with NULL at end";
  
  /* Pointer example code */
  u8 u8Test = 0xA5;
  u32 u32Test = 0x0000ffff;
  u8* pu8Example; 
  u32* pu32Example;
  
  //Load the addresses into pointer variables
  
 pu8Example = &u8Test;
 pu32Example = &u32Test;
 
 //access the var via pointers (2 ways)
 *pu8Example += 1;
 (*pu32Example)++;
 
 //moving the pointers (watch out for the second one!)
 pu8Example++;
 *pu32Example++;

  //Struct example code
 u8 u8CurrentServer;
 ServerType sServer1;
 ServerType* psServerParser;
 
 psServerParser = &sServer1; //
 sServer1.u8ServerNumber = 18; //assigns server number
 u8CurrentServer = psServerParser -> u8ServerNumber; //gets the server # of current server
  
  while(1)
  {
    
  } /* end while(1) main loop */
  
} /* end main() */


/***********************************************************************************************************************
* Function definitions
***********************************************************************************************************************/

/*
Function InitializeServer

Description:
Initializes a new server. A new server has an empty trya of drinks and is assigned the next 
number available.

Requires:
  - psServer_ points to the server list where a new server is to be initialized;
    since the the server list is a pointer toa linked list, this is a pointer-to-pointer
  - Main_u8Servers hols the current number of active servers

Promises:
  - Returns TRUE if the server is initialized
  - REturns FALSE if the server cannot be initialized
*/

bool InitializeServer(ServerType ** psServer_)
{
  if(*psServer_ == NULL)
    return (FALSE); //when server cannot be initialized
  //more code to be added
  
  return(TRUE);
  
} /* end InitializeServer() */

/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File */
/*--------------------------------------------------------------------------------------------------------------------*/
#endif /* SOLUTION */