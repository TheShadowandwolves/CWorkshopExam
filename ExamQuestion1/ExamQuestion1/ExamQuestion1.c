// ExamQuestion1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
/*
Leonard Blam
900086
C Workshop Exam
Question 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "String.h"

int main()
{
    String new;
    new.data = "HELLO";
    printf("Data in it is %s \n", new.data);
    printf("Length: %u \n", getStringLength(&new));
    String tempStr;
    char* temp = "Hi";
    CopyCString(&tempStr, temp);
    printf("Temp Str is: %s \n", tempStr.data);
    DeleteString(&new);
    DeleteString(&tempStr);
}
