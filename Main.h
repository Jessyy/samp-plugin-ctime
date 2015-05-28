/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#pragma once

#define PLUGIN_VERSION		"0.1.0"

#ifndef CELL_SIZE
	#define CELL_SIZE		4
#endif

typedef void
	(*logprintf_t)(const char *, ...)
;

extern logprintf_t
	logprintf
;