/**
 * Copyright (c) 2011 RyDeR`
 * All rights reserved.
 */

#if defined _ctime_included
	#endinput
#endif

#define _ctime_included

#pragma library CTime

/**
 * <summary>e_tm</summary>
 */
enum e_tm {
	tm_sec,		// Seconds [0, 59]
	tm_min,		// Minutes [0, 59]
	tm_hour,	// Hour [0, 23]
	tm_mday,	// Day of month [1, 31]
	tm_mon,		// Month of year [0, 11]
	tm_year,	// Years since 1900
	tm_wday,	// Day of week [0, 6] (Sunday = 0)
	tm_yday,	// Day of year [0, 365]
	tm_isdst	// Daylight savings flag
};

/**
 * <summary>CLOCKS_PER_SEC</summary>
 */
#define CLOCKS_PER_SEC	(1000)

/**
 * <summary>tm<%0></summary>
 * <param name="%0">variable name</param>
 */
#define tm<%0>			tm:%0[e_tm]

/**
 * <summary>Prints the time elapsed since samp_server.exe started</summary>
 * <returns>?</returns>
 */
native clock();

/**
 * <summary>difftime</summary>
 * <param name="Time:tTimeEnd"></param>
 * <param name="Time:tTimeStart"></param>
 * <returns>The difference between the two times</returns>
 */
native difftime(Time:tTimeEnd, Time:tTimeStart);

/**
 * <summary>mktime</summary>
 * <param name="tm<tmPtr>"></param>
 * <returns>This function returns a time_t value corresponding to the calendar time passed as argument. On error, a -1 value is returned</returns>
 */
native mktime(tm<tmPtr>);

/**
 * <summary>ctime></summary>
 * <param name="Time:tTime"></param>
 * <param name="szBuffer[]"></param>
 * <param name="iSize">Number of cells to fill.</param>
 */
native ctime(Time:tTime, szBuffer[], const iSize = sizeof(szBuffer));

/**
 * <summary>asctime</summary>
 * <param name="tm<tmPtr>"></param>
 * <param name="szBuffer[]"></param>
 * <param name="iSize">Number of cells to fill.</param>
 */
native asctime(tm<tmPtr>, szBuffer[], const iSize = sizeof(szBuffer));

/**
 * <summary>gmtime</summary>
 * <param name="Time:tTime"></param>
 * <param name="tm<tmPtr>"></param>
 */
native gmtime(Time:tTime, tm<tmPtr>);

/**
 * <summary>localtime</summary>
 * <param name="Time:tTime"></param>
 * <param name="tm<tmPtr>"></param>
 */
native localtime(Time:tTime, tm<tmPtr>);

/**
 * <summary>Convert date and time to a string</summary>
 * <param name="szBuffer[]">Buffer to copy formatted time string to</param>
 * <param name="iSize">Number of cells to fill.</param>
 * <param name="szFormat[]">Format string</param>
 * <param name="tm<tmPtr>">Unix timestamp, use -1 to use the current time</param>
 * <returns>This function does not return any specific values</returns>
 */
native strftime(szBuffer[], const iSize, const szFormat[], tm<tmPtr>);

/**
 * <summary>Prints the current time in unix-timestamp</summary>
 * <returns>?</returns>
 */
stock Time:time()
{
	return Time:gettime();
}