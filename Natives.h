/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#pragma once

#include "SDK/amx/amx.h"

#include "Main.h"

#define CHECK_PARAMS(nCount, sFunc) \
	if(iParams[0] != (nCount * CELL_SIZE)) \
	{ \
		logprintf("%s: Expecting %d parameter(s), but found %d", sFunc, nCount, iParams[0] / sizeof(cell)); \
		return 0; \
	}

namespace Natives
{
	cell AMX_NATIVE_CALL CTime_clock(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_difftime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_mktime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_asctime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_ctime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_gmtime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_localtime(AMX *pAMX, cell *iParams);
	cell AMX_NATIVE_CALL CTime_strftime(AMX *pAMX, cell *iParams);
};