/**
 * @file   color_output.h
 * @brief  输出多种颜色的调试信息
 * @author 叶剑飞
 * @date   2014-08-06
 */

#ifndef _COLOR_OUTPUT_H_
#define _COLOR_OUTPUT_H_

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif // _WIN32

#ifdef _MSC_VER
#define C_INLINE __forceinline
#else
#define C_INLINE inline
#endif // _MSC_VER

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

static C_INLINE void red_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[31;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

static C_INLINE void green_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[32;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_GREEN);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

static C_INLINE void yellow_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[33;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

static C_INLINE void blue_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[34;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

static C_INLINE void magenta_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[35;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif
}

static C_INLINE void cyan_color_debug_log(const char *str)
{
#ifndef _WIN32
	printf("\033[36;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_GREEN | FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif  // _COLOR_OUTPUT_H_
