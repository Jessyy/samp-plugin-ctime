/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#include "SDK/amx/amx.h"
#include "SDK/plugincommon.h"

#include "Main.h"

#include "CTime.h"
#include "Natives.h"

CTime
	*g_CTime
;

logprintf_t 
    logprintf
;

extern void 
    *pAMXFunctions
;

AMX_NATIVE_INFO amx_Natives[] =
{
	{ "clock",		Natives::CTime_clock },
	{ "difftime",	Natives::CTime_difftime },
	{ "mktime",		Natives::CTime_mktime },
	{ "asctime",	Natives::CTime_asctime },
	{ "ctime",		Natives::CTime_ctime },
	{ "gmtime",		Natives::CTime_gmtime },
	{ "localtime",	Natives::CTime_localtime },
	{ "strftime",	Natives::CTime_strftime },
	{ 0, 0 }
};

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
	return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData)
{
	pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
	logprintf = (logprintf_t)ppData[PLUGIN_DATA_LOGPRINTF];

	g_CTime = new CTime();

	logprintf("  CTime Plugin v%s by RyDeR` loaded", PLUGIN_VERSION);
	return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	g_CTime->~CTime();

	logprintf("  CTime Plugin v%s by RyDeR` unloaded", PLUGIN_VERSION);
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX *pAMX)
{
	return amx_Register(pAMX, amx_Natives, -1);
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX *pAMX)
{
	return AMX_ERR_NONE;
}