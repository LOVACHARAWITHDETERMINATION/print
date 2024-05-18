#pragma once
// print_basic_original.h
#ifndef PRINT_BASIC_ORIGINAL_H
#define PRINT_BASIC_ORIGINAL_H

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h> // 用于字符串比较

// 主题结构定义
typedef struct {
    const wchar_t* open_bracket;
    const wchar_t* close_bracket;
    const wchar_t* open_quote;
    const wchar_t* close_quote;
    int pre_line_break;
    int post_line_breaks;
    int newline_between;
} Theme;

// 主题数组
static const Theme themes[] = {
    {L"", L"", L"", L"", 0, 1, 0},  // 主题 0
    {L"【", L"】", L"“", L"”", 0, 1, 0},  // 主题 1-A
    {L"[", L"]", L"\"", L"\"", 0, 1, 0},  // 主题 2-A
    {L"「", L"」", L"“", L"”", 0, 1, 0},  // 主题 3-A
    {L"【", L"】", L"“", L"”", 0, 1, 1},  // 主题 1-B
    {L"[", L"]", L"\"", L"\"", 0, 1, 1},  // 主题 2-B
    {L"「", L"」", L"“", L"”", 0, 1, 1},  // 主题 3-B
    {L"【", L"】", L"“", L"”", 0, 2, 0},  // 主题 1-C
    {L"[", L"]", L"\"", L"\"", 0, 2, 0},  // 主题 2-C
    {L"「", L"」", L"“", L"”", 0, 2, 0},  // 主题 3-C
    {L"【", L"】", L"“", L"”", 0, 2, 1},  // 主题 1-D
    {L"[", L"]", L"\"", L"\"", 0, 2, 1},  // 主题 2-D
    {L"「", L"」", L"“", L"”", 0, 2, 1}   // 主题 3-D
};

// 主题编号数组
static const char* theme_ids[] = {
    "0", "1-A", "2-A", "3-A", "1-B", "2-B", "3-B", "1-C", "2-C", "3-C", "1-D", "2-D", "3-D"
};

// print_basic 函数声明
void print_basic(const wchar_t* name, const wchar_t* text, const char* theme_id_str, int wait_for_input) {
    int i, theme_index = 0; // 默认为主题0
    const Theme* theme;

    // 查找对应的主题编号
    for (i = 0; i < sizeof(theme_ids) / sizeof(theme_ids[0]); i++) {
        if (strcmp(theme_id_str, theme_ids[i]) == 0) {
            theme_index = i;
            break;
        }
    }
    theme = &themes[theme_index];
    setlocale(LC_ALL, "");
    if (theme->pre_line_break) {
        wprintf(L"\n");
    }
    wprintf(L"%ls%ls%ls", theme->open_bracket, name, theme->close_bracket);
    if (theme->newline_between) {
        wprintf(L"\n");
    }
    wprintf(L" %ls%ls%ls", theme->open_quote, text, theme->close_quote);
    for (i = 0; i < theme->post_line_breaks; i++) {
        wprintf(L"\n");
    }
    if (wait_for_input) {
        fgetwc(stdin);  // 等待用户输入
    }
}

#endif // PRINT_BASIC_ORIGINAL_H
