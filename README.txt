### 使用说明：`print_custom.h`

#### 基本功能

`print_custom` 是一个用于显示格式化文本的函数，适用于需要显示中文字符或其他多字节字符的场景。它允许用户指定姓名括号的样式、文本的引号样式、姓名与文本之间的换行方式、输出前后的换行行为，以及在输出完成后是否暂停等待用户输入。

#### 函数参数详解

- **const wchar_t\* name**: 要显示的姓名，必须是宽字符串字面值，用于正确处理多字节字符。
- **const wchar_t\* text**: 要显示的文本，同样必须是宽字符串字面值。
- **int bracket_type**: 控制姓名括号的样式。
  - `1`: 使用方括号 `[ ]`
  - `2`: 使用全角方括号 `【 】`
  - `3`: 使用角括号 `「 」`
  - 默认: 使用圆括号 `( )`
- **int quote_type**: 控制文本引号的样式。
  - `1`: 使用中文引号 “ ”
  - 默认: 使用英文引号 " "
- **int newline_type**: 控制姓名与文本之间是否添加换行。
  - `1`: 添加换行
  - `0`: 不添加换行
- **int pre_line_break**: 控制在姓名框前是否添加空行。
  - `1`: 添加一个空行
  - `0`: 不添加空行
- **int post_line_breaks**: 控制在文本后添加的换行次数。
  - `1`: 添加两个换行
  - `0`: 添加一个换行
- **int wait_for_input**: 控制输出完成后是否等待用户输入继续。
  - `1`: 等待用户按下任何键
  - `0`: 不等待，直接继续执行

#### 为什么必须使用 `L` 前缀

`L` 前缀用于标识字符串为宽字符串字面值（wchar_t 类型），这对于处理包括中文在内的多字节字符集至关重要。在C语言中，不使用 `L` 前缀的字符串默认为单字节字符数组（char 类型），这可能导致字符编码错误，特别是在涉及非ASCII字符时。

#### 等待输入引起的额外换行解释

在 `print_custom` 函数中使用 `getwchar()` 等待用户输入时，通常在用户按下回车键以继续之后会出现一个看似额外的换行。这是因为回车键本身就会在控制台中生成一个新的行，这是控制台行为的一部分，并不是由 `getwchar()` 函数直接控制的。因此，即使在文本后已经添加了预定的换行，回车键的按下仍会造成另一行的出现，给用户的感觉就像是添加了额外的换行。

#### 示例代码

```c
#include "print_custom.h"

int main() {
    print_custom(L"张三", L"这是示例文本", 2, 1, 0, 0, 1, 1);
    print_custom(L"李四", L"欢迎使用", 1, 0, 1, 0, 0, 0);
    return 0;
}
```

这个示例展示了如何使用 `print_custom` 函数，包括如何格式化姓名和文本，控制换行以及处理用户输入。