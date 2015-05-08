/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

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