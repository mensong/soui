#ifndef LSTABS_DEFINED
#define LSTABS_DEFINED

#include "lsdefs.h"
#include "lsktab.h"

/* ---------------------------------------------------------------------- */


/* ---------------------------------------------------------------------- */

typedef struct
{
	enum lsktab lskt;					/* Kind of tab */
	LONG ua;							/* tab position */
	WCHAR wchTabLeader;					/* character for tab leader */
										/*   if 0, no leader is used*/
	WCHAR wchCharTab;					/* Character for CharTab	*/
} LSTBD;

/* ---------------------------------------------------------------------- */

typedef struct lstabs
{
	LONG duaIncrementalTab;				/* "Default" tab behavior */
	DWORD iTabUserDefMac;
	LSTBD* pTab;				
} LSTABS;


#endif /* !LSTABS_DEFINED */
