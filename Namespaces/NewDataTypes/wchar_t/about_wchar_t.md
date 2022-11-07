# About

**wchar_t** is a character type defined in ANSI C++ to hold 16-bit wide characters.

```
16-bit wide characters are used to represent the character sets of languages that have more than 255 characters, such as Japanese. This is important if we are writing programs for international distribution.
```

ANSI C++ also introduced a new character literal known as _wide_character_ literal which uses two bytes of memory.


Wide_character literals begin with the letter `L`, below is an example:

```c++
L'xy'
```
