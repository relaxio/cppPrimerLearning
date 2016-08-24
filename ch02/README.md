# Chapter 2 Variables and Basic Types

##Exercise 2.1
c++规定的算术类型的最小尺寸（所占内存空间）  
> 字节数来源 `clang 3.8.0` 环境下 <getBasicTSize.cc> 的运行结果

|类型         |含义         |最小尺寸   |字节数 |
|---          |---          |---        |---   |
|`bool`       |布尔类型      |未定义     |-     |
|`char`       |字符          |8位        |1    |
|`wchar_t`    |宽字符        |16位       |2    |
|`char16_t`   |Unicode 字符  |16位       |2    |
|`char32_t`   |Unicode 字符  |32位       |4    |
|`short`      |短整型        |16位       |2    |
|`int`        |整型          |16位       |2    |
|`long`       |长整型        |32位       |4    |
|`long long`  |长整型        |64位       |8    |
|`float`      |单精度浮点数  |6位有效数字 |8    |
|`double`     |双精度浮点数  |10位有效数字|8    |
|`long double`|扩展精度浮点数|10位有效数字|16   |

