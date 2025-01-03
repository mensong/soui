#ifndef LSLINFO_DEFINED
#define LSLINFO_DEFINED

#include "lsdefs.h"
#include "endres.h"

typedef struct
{
	LONG dvpAscent;
	LONG dvrAscent;
	LONG dvpDescent;
	LONG dvrDescent;

	LONG dvpMultiLineHeight;
	LONG dvrMultiLineHeight;

	LONG dvpAscentAutoNumber;
	LONG dvrAscentAutoNumber;
	LONG dvpDescentAutoNumber;
	LONG dvrDescentAutoNumber;

	LSCP cpLim;					/* First cp which is NOT on this line */
	LSDCP dcpDepend;			/* # of chars wrapped to next line  */
	LSCP cpFirstVis;			/* First actual (not hidden) character in a line*/
								/* allows client to use character properties from the correct paragraph */


	ENDRES endr;				/* How line ended */
	BOOL fAdvanced;
	LONG vaAdvance;				/* Valid iff (fAdvanced != 0) */

	BOOL fFirstLineInPara;
	BOOL fTabInMarginExLine;
	BOOL fForcedBreak;

	DWORD nDepthFormatLineMax;  /* Formatting depth of the line (1--for plain line) */

	UINT EffectsFlags;			/* set of client defined special effects flags */
} LSLINFO;

#endif /* !LSLINFO_DEFINED */
