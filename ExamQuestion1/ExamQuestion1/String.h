#pragma once

typedef enum { false, true } BOOL;
typedef unsigned int size_t;
typedef struct String
{
    char* data;
}String;
String *CreateString(const char *source);
BOOL DeleteString(String *str);
const char *GetString(const String *str);
size_t getStringLength(const String *str);
BOOL IsEmpty(const String *str);
BOOL CompareString(const String *str1, const String *str2);
void CopyString(String *dst, const String *src);
void CopyCString(String *dst, const char *src);
