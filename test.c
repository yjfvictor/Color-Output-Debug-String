/**
 * @file   test.c
 * @brief  输出彩色文字的测试程序
 * @author 叶剑飞
 * @date   2014-08-06
 */

#include "color_output.h"

int main(void)
{
	puts("normal");
	red_color_output("red");
	puts("normal");
	green_color_output("green");
	puts("normal");
	yellow_color_output("yellow");
	puts("normal");
	blue_color_output("blue");
	puts("normal");
	magenta_color_output("magenta");
	puts("normal");
	cyan_color_output("cyan");
	puts("normal");
	return 0;
}