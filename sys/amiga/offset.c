/* $Id: offset.c,v 1.1.1.1 2000/06/27 01:48:01 amura Exp $ */
/*
 * Used to return number of bytes member is from start of structure type.
 * This is used because Manx 3.20a can't handle Bob's OFFSET macro 
 */
#include	"config.h"	/* Dec.19,1992 Add by H.Ohkubo */

char *offset_dummy = 0;
