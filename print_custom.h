#pragma once
// print_custom.h

#ifndef PRINT_CUSTOM_H
#define PRINT_CUSTOM_H

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// ���������Ͷ���
void print_custom(const wchar_t* name, const wchar_t* text, int bracket_type, int quote_type, int newline_type, int pre_line_break, int post_line_breaks, int wait_for_input) {
    wchar_t open_bracket, close_bracket, open_quote, close_quote;

    // ���õ�������Ϊ֧�ֿ��ַ����
    setlocale(LC_ALL, "");

    // ���� bracket_type ѡ����������
    switch (bracket_type) {
    case 1:
        open_bracket = L'[';
        close_bracket = L']';
        break;
    case 2:
        open_bracket = L'��';
        close_bracket = L'��';
        break;
    case 3:
        open_bracket = L'��';
        close_bracket = L'��';
        break;
    default:
        open_bracket = L'(';
        close_bracket = L')';
        break;
    }

    // ���� quote_type ѡ����������
    switch (quote_type) {
    case 1:
        open_quote = L'��';
        close_quote = L'��';
        break;
    default:
        open_quote = L'"';
        close_quote = L'"';
        break;
    }

    // ����������ǰ�Ļ���
    if (pre_line_break == 1) {
        wprintf(L"\n");
    }

    // ���� newline_type ȷ���Ƿ�������������֮����ӻ���
    if (newline_type) {
        wprintf(L"%lc%s%lc\n%lc%s%lc", open_bracket, name, close_bracket, open_quote, text, close_quote);
    }
    else {
        wprintf(L"%lc%s%lc %lc%s%lc", open_bracket, name, close_bracket, open_quote, text, close_quote);
    }

    // �������ֺ�Ļ���
    if (post_line_breaks == 0) {
        wprintf(L"\n");
    }
    else {
        wprintf(L"\n\n");
    }

    // �ȴ��û����룬�����Ҫ
    if (wait_for_input == 1) {
        getwchar();  // �ȴ��û�����س�������ִ�к�������
    }
}

#endif // PRINT_CUSTOM_H
