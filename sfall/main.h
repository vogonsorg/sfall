/*
*    sfall
*    Copyright (C) 2008-2016  The sfall team
*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include <assert.h>
//#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "SafeWrite.h"
#include "Logging.h"

// global flag, indicating that debugging features of Sfall are enabled
#ifndef NO_SFALL_DEBUG
	extern bool IsDebug;
#else
	#define IsDebug false
#endif

extern char ini[65];
extern char translationIni[65];
