/*
 * hfcore.c
 *
 *  Created on: Feb 17, 2013
 *      Author: lawrence.gunn
 */

#include <stdio.h>

void HFCorePrint(const char* text)
{
	fprintf(stderr, "Hi from the LIBRARY: %s\n", (char*) text);
}


