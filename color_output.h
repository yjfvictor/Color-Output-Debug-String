/**
 * @file   color_output.h
 * @brief  输出彩色文字（跨平台，支持Windows和Linux）
 * @author 叶剑飞
 * @date   2014-08-06
 */

#ifndef _COLOR_OUTPUT_H_
#define _COLOR_OUTPUT_H_

#include <stdio.h>
#include <assert.h>

#ifdef _WIN32
#include <windows.h>
#endif // _WIN32

#ifdef _MSC_VER
#define INLINE __forceinline
#else
#define INLINE inline
#endif // _MSC_VER

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * @brief 红字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void red_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[31;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	assert(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

/**
 * @brief 绿字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void green_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[32;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_GREEN);
	assert(str);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

/**
 * @brief 黄字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void yellow_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[33;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	assert(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

/**
 * @brief 蓝字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void blue_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[34;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	assert(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

/**
 * @brief 洋红字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void magenta_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[35;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	assert(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif
}

/**
 * @brief 青蓝字输出
 * @param[in] str 要输出的字符串
 */
static INLINE void cyan_color_output(const char *str)
{
#ifndef _WIN32
	assert(str);
	printf("\033[36;48m%s\033[39;48m\n", str);
#else
	HANDLE hStandardOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	if ( hStandardOutput == NULL )
		return;
	assert(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_GREEN | FOREGROUND_BLUE);
	puts(str);
	SetConsoleTextAttribute(hStandardOutput, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#endif // _WIN32
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif  // _COLOR_OUTPUT_H_
