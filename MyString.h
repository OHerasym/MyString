#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
/** \brief counts string length
 *
 * \param s[] char input string
 * \return int length of string
 *
 */
int myStrlen(char string[] );

/** \brief copy one string to another
 *
 * \param s char* first string
 * \param t char* second string
 * \return void
 *
 */
void mystrcpy(char*, char*);
/** \brief comparing two strings
 *
 * \param s char* first string
 * \param t char* second string
 * \return int if first is higher, return positive number, else neggative
 *
 */
int mystrcmp(char*, char*);
/** \brief Concatenate strings
 *
 * \param s char* first string
 * \param t char* second string
 * \return void
 *
 */
void mystrcat(char*, char*);
/** \brief Locate substring in string
 *
 * \param str char* input string
 * \param target char* input substring
 * \return char* Returns a pointer to the first
 * occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
 *
 */
char* mystrstr(char*, char*);
/** \brief Locate first occurrence of character in string
 *
 * \param s const char* input string
 * \param c int charter to be located
 * \return char* Returns a pointer to t
 * he last occurrence of character in the C string str.
 *
 */
char *mystrchr(const char*, int);

/** \brief Get span of character set in string
 *
 * \param s1 const char* C string to be scanned.
 * \param s2 const char* C string containing the characters to match.
 * \return size_t Returns the length of the initial
 * portion of str1 which consists only of characters
 * that are part of str2.
 *
 */
size_t mystrspn(const char*, const char*);

/** \brief Get span until character in string
 *
 * \param s1 const char* C string to be scanned.
 * \param s2 const char* C string containing the characters to match.
 * \return size_t Scans str1 for the first occurrence
 * of any of the characters that are part of str2, returning
 * the number of characters of str1 read before this first occurrence.
 *
 */
size_t mystrcspn(const char*, const char*);

/** \brief Split string into tokens
 *
 * \param str char* input string
 * \param delimiters char* string containing the delimiter characters
 * \return char* A pointer to the last token found in string.
 *
 */
char* mystrtok(char*, char*);

#endif // _MYSTRING_H_
