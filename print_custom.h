#pragma once
// print_custom.h

#ifndef PRINT_CUSTOM_H
#define PRINT_CUSTOM_H

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// 函数声明和定义
void print_custom(const wchar_t* name, const wchar_t* text, int bracket_type, int quote_type, int newline_type, int pre_line_break, int post_line_breaks, int wait_for_input) {
    wchar_t open_bracket, close_bracket, open_quote, close_quote;

    // 设置地区设置为支持宽字符输出
    setlocale(LC_ALL, "");

    // 根据 bracket_type 选择括号类型
    switch (bracket_type) {
    case 1:
        open_bracket = L'[';
        close_bracket = L']';
        break;
    case 2:
        open_bracket = L'【';
        close_bracket = L'】';
        break;
    case 3:
        open_bracket = L'「';
        close_bracket = L'」';
        break;
    default:
        open_bracket = L'(';
        close_bracket = L')';
        break;
    }

    // 根据 quote_type 选择引号类型
    switch (quote_type) {
    case 1:
        open_quote = L'“';
        close_quote = L'”';
        break;
    default:
        open_quote = L'"';
        close_quote = L'"';
        break;
    }

    // 处理姓名框前的换行
    if (pre_line_break == 1) {
        wprintf(L"\n");
    }

    // 根据 newline_type 确定是否在姓名和文字之间添加换行
    if (newline_type) {
        wprintf(L"%lc%s%lc\n%lc%s%lc", open_bracket, name, close_bracket, open_quote, text, close_quote);
    }
    else {
        wprintf(L"%lc%s%lc %lc%s%lc", open_bracket, name, close_bracket, open_quote, text, close_quote);
    }

    // 处理文字后的换行
    if (post_line_breaks == 0) {
        wprintf(L"\n");
    }
    else {
        wprintf(L"\n\n");
    }

    // 等待用户输入，如果需要
    if (wait_for_input == 1) {
        getwchar();  // 等待用户输入回车，继续执行后续代码
    }
}

#endif // PRINT_CUSTOM_H
