/***********************************************************************************************************************
File: main.h

Description:
Header file for main.c.
*******************************************************************************/

#ifndef __MAIN_H
#define __MAIN_H


/***********************************************************************************************************************
* Constant Definitions
***********************************************************************************************************************/
#define U32_DRINK_SERVE_TIME    (u32)3000   /* Loop iterations before drink is removed */
#define U8_MAX_DRINKS           (u8)3       /* This line type casts 3 as u8, and max drinks a server can hold*/

/***********************************************************************************************************************
* Type Definitions
***********************************************************************************************************************/
typedef enum {EMPTY, BEER, SHOOTER, WINE, HIBALL} DrinkType;

typedef struct
{
  u8 u8ServerNumber;                     //unique token for this item
  DrinkType asServingTray[U8_MAX_DRINKS]; //data payload array
  void* psNextServer;                     //pointer to the next ServerType
}ServerType;
/***********************************************************************************************************************
* Function declarations
***********************************************************************************************************************/


      
    #endif /* __MAIN_H */