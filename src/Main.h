/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#pragma once

#define PLUGIN_MAJOR		0
#define PLUGIN_MINOR		1
#define PLUGIN_BUILD		0
#define PLUGIN_REVISION		1

// Source for STR and STRINGIZE
// http://stackoverflow.com/questions/12821369/

#define STR(value) #value
#define STRINGIZE(value) STR(value)

#define PLUGIN_VERSION_STR \
	"v" STRINGIZE(PLUGIN_MAJOR) \
	"." STRINGIZE(PLUGIN_MINOR) \
	"." STRINGIZE(PLUGIN_BUILD) \
	"." STRINGIZE(PLUGIN_REVISION)

#ifndef CELL_SIZE
	#define CELL_SIZE		4
#endif

typedef void
	(*logprintf_t)(const char *, ...)
;

extern logprintf_t
	logprintf
;