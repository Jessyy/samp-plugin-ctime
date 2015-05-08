/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#include "SDK/amx/amx.h"

#define _CRT_SECURE_NO_WARNINGS
#include <ctime>

class CTime {
	public:
		CTime();
		~CTime();

		void SetTimePointer(tm *tmPtr, cell *iPhysAddr);
		void SetArrayAddress(cell *iPhysAddr, tm *tmPtr);
};

extern CTime
	*g_CTime
;