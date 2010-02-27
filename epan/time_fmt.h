/* time_fmt.h
 * Definitions for various time display formats.
 *
 * $Id: to_str.h 31967 2010-02-23 19:28:38Z etxrab $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __TIME_FMT_H__
#define __TIME_FMT_H__

/*
 * Resolution of a time stamp.
 */
typedef enum {
	TO_STR_TIME_RES_T_SECS,	 /* seconds      */
	TO_STR_TIME_RES_T_DSECS, /* deciseconds  */
	TO_STR_TIME_RES_T_CSECS, /* centiseconds */
	TO_STR_TIME_RES_T_MSECS, /* milliseconds */
	TO_STR_TIME_RES_T_USECS, /* microseconds */
	TO_STR_TIME_RES_T_NSECS	 /* nanoseconds  */
} to_str_time_res_t;

/*
 * Display format of an absolute-time time stamp.
 */
typedef enum {
	ABSOLUTE_TIME_LOCAL,	/* local time in our time zone, with month and day */
	ABSOLUTE_TIME_UTC,	/* UTC, with month and day */
	ABSOLUTE_TIME_DOY_UTC	/* UTC, with 1-origin day-of-year */
} absolute_time_display_e;

#endif /* __TIME_FMT_H__  */
