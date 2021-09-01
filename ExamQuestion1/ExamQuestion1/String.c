#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <malloc.h>
#include<stdio.h>
#include <string.h>
/// @brief Creates a new string and then copies the source string to it and returns address of new string
/// @param source is the string given by user
/// @return the new string that was created
String* CreateString(const char* source)
{
    String* newString = (char*)malloc(100*sizeof(String));
    int sizeSource = sizeof(source);
    if (sizeSource)
    {
      //  strncpy(newString, source, sizeof(source));
        CopyCString(newString, source);
    }

    return &newString;
}
/// @brief deletes the whole string
/// @param str is given variable that needs to be destroyed from the program
/// @return if correctly deleted it should return true and if not false, meaning something got wrong
BOOL DeleteString(String* str)
{
    for (auto i = 0; i < getStringLength(str); i++)
    {
        free(str->data[i]);
    }
    free(str);
    /*  if (str->data == NULL)
      {
          return true;
      }
      return false;*/
      /*  if (str->data == NULL)
        {
            return true;
        }*/
}
/// @brief gets the value/data from the struct String
/// @param str is a struct that contains the string (char*)
/// @return data or string
const char* GetString(const String* str)
{
    return str->data;
}
/// @brief finds out how big the size is of string (char*)
/// @return size_t of length string
size_t getStringLength(const String* str)
{
    return strlen(str->data);
}
/// @brief if it is empty return true
/// @return true if empty and false if wrong
BOOL IsEmpty(const String* str)
{
    if (str->data)
    {
        return false;
    }
    else
    {
        return true;
    }
}
/// @brief compares the two strings and only returns true if strcmp outputs 0
/// @param str1 first string to compare
/// @param str2 second string to compare
/// @return true if exactly equal and false if one is bigger or smaller
BOOL CompareString(const String* str1, const String* str2)
{
   /* BOOL currentlyStatus = true;
    if (sizeof(str1->data) != sizeof(str2->data))
    {
        return currentlyStatus = false;
    }
    for (int index = 0; index < sizeof(str1->data); index++)
    {
        if (str1->data[index] != str2->data[index])
        {
            currentlyStatus = false;
            break;
        }
    }*/
    BOOL currentlyStatus = false;
    if (strcmp(str1, str2) == 0)
    {
        currentlyStatus = true;
    }
    return currentlyStatus;
}
/// @brief copies the string into another one and deletes it
/// @param dst the string that it needs to copy in
/// @param src the source string from where we copy
void CopyString(String* dst, const String* src)
{
    /*int StrSize = getStringLength(src);

    for (auto index = 0; index < StrSize; index++)
    {
        dst->data[index] = src->data[index];
    }*/
    strcpy(dst, src);
    DeleteString(src);
}
/// @brief 
/// @param dst 
/// @param src 
void CopyCString(String* dst, const char* src)
{
    //String newTempString = malloc(sizeof(String));

   // strcpy(dst, newTempString);
    //DeleteString(newTempString);
    int StrSize = sizeof(src);
    for (auto i = 0; i < StrSize; i++)
    {
        dst->data[i] = src[i];
    }
}
