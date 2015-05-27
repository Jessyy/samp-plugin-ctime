/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#pragma once

#define PLUGIN_VERSION		"0.1.0"

typedef void
	(*logprintf_t)(const char *, ...)
;

extern logprintf_t
	logprintf
;