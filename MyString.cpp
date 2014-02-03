#include "MyString.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int myStrlen(char string[] )
{
  if (string == 0) return 0;

  int i = 0;
  while (string[i] != '\0') {
      ++i;
  }
  return i;
}

void mystrcpy(char* string, char* string2 )
{
  if (string && string2 == 0) return;

  int i = 0;
  while (( string[i] = string2[i]) != '\0') {
      i++;
  }
}

int mystrcmp(char* string, char* string2 )
{
  bool isNull = string && string2;
  if (isNull == 0) return 0;

  for ( ; *string == *string2; string++, string2++ )
    if (*string == '\0')
      return 0;
  return *string - *string2;
}

void mystrcat(char* string, char* substring)
{
  if (string && substring == 0) return;

  int stringIndex, str2Index;
  stringIndex = str2Index = 0;
  while(string[stringIndex] != '\0') {
      stringIndex++;
  }
  while((string[stringIndex++] = substring[str2Index++]) != '\0');
}

char* mystrstr(char *str, char *target) {
  if ( str && target == 0) return 0;
  if (target == 0)
    return str;
  char *temp = (char*)str;
  while (*temp != 0) {
    char *p1Begin = temp, *sumbol = (char*)target;
    bool isStr = (*temp && *sumbol && *temp == *sumbol);
    while (isStr != 0) {
      temp++;
      sumbol++;
      isStr = (*temp && *sumbol && *temp == *sumbol);
    }
    if (*sumbol == 0)
      return p1Begin;
    temp = p1Begin + 1;
  }
  return 0;
}

char *mystrchr(const char *string, int ch)
{
  if( string && ch == 0) return 0;
  while (*string != (char) ch) {
    if (*string++ == 0) {
      return 0;
    }
  }
  return (char *)string;
}

size_t mystrspn(const char *string1, const char *string2)
{
  if (*string1 && *string2 == 0) return 0;
  size_t ret = 0;
  bool result = *string1 && mystrchr(string2,*string1++);
  while (result) {
    ret++;
    result = *string1 && mystrchr(string2,*string1++);
  }
  return ret;
}

size_t mystrcspn(const char *string1, const char *string2)
{
  if (string1 && string2 == 0) return 0;
  size_t ret = 0;
  while (*string1 != 0) {
      bool result = mystrchr(string2,*string1);
    if (result)
      return ret;
    else
      string1++, ret++;
  }
  return ret;
}

char *mystrtok(char * string, char * delim)
{
  static char* temp = 0;
  if (string != 0)
    temp = string;
  else if(temp == 0)
   return 0;
  string = temp + mystrspn(temp, delim);
  temp = string + mystrcspn(string, delim);
  if(temp == string)
    return temp = 0;
  temp = *temp ? *temp = 0, temp + 1 : 0;
  return string;
}
