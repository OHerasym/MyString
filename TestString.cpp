#include "UnitTest++.h"
#include "MyString.h"
#include <string.h>

namespace
{
  SUITE(strlen)
  {
    TEST(first)
    {
      const int result = myStrlen("qwe");
      const int mustBe = strlen("qwe");
      CHECK_EQUAL(mustBe, result);
    }
    TEST(second)
    {
      const int result = myStrlen("jdgshddsu sdihgsoid hsoidhfsoid");
      const int mustBe = strlen("jdgshddsu sdihgsoid hsoidhfsoid");
      CHECK_EQUAL(mustBe, result);
    }
    TEST(third)
    {
      const int result = myStrlen(" UHui aseufh IUUU*&^&^&*65767686");
      const int mustBe = strlen(" UHui aseufh IUUU*&^&^&*65767686");
      CHECK_EQUAL(mustBe, result);
    }
  }

  SUITE(strcpy)
  {
    TEST(first)
    {
      char temp[20] = "qwe+++8y37 ___qwe";
      char buffer[20];
      mystrcpy(temp, buffer);
      CHECK_EQUAL(temp, buffer);
    }
  }

  SUITE(strcmp)
  {
    TEST(first)
    {
      char temp[20] = "qweqw";
      char buffer[20] = "qweqw";
      int result = mystrcmp(temp, buffer);
      int mustbe = strcmp(temp, buffer);
      CHECK_EQUAL(mustbe, result);
    }
    TEST(second)
    {
      char temp[20] = "nfuei&*&4";
      char buffer[20] = "nfuei&*&4";
      int result = mystrcmp(temp, buffer);
      int mustbe = strcmp(temp, buffer);
      CHECK_EQUAL(mustbe, result);
    }
  }

  SUITE(strcat)
  {
    TEST(first)
    {
      char temp1[20] = "qwe";
      char temp2[20] = "asd";
      char buffer1[20] = "qwe";
      char buffer2[20] = "asd";
      strcat(temp1, temp2);
      mystrcat(buffer1, buffer2);
      CHECK_EQUAL(temp1, buffer1);
    }
  }

  SUITE(strstr)
  {
    TEST(first)
    {
      char temp[] = "This is a simple string";
      char * result, *mustBe;
      result = mystrstr (temp, "simple"); //pch = mystrstr (str, "simple");
      mustBe = strstr(temp, "simple");
      CHECK_EQUAL(result, mustBe);
    }
  }

  SUITE(strchr)
  {
    TEST(first)
    {
      char temp[] = "This is a sample string";
      char * result, *mustBe;
      result = mystrchr(temp, 's');
      mustBe = strchr(temp, 's');
      CHECK_EQUAL(result, mustBe);
    }
    TEST(second)
    {
      char temp[] = "jhsda fiauhf ewiuh s";
      char * result, *mustBe;
      result = mystrchr(temp, 's');
      mustBe = strchr(temp, 's');
      CHECK_EQUAL(result, mustBe);
    }
  }

  SUITE(strtok)
  {
    TEST(first)
    {
      char temp[32] = "- This, a sample string.";
      char* result, *mustBe;
      result = strtok (temp, " ,.-");
      mustBe = mystrtok(temp, " ,.-");
      CHECK_EQUAL(result, mustBe);
    }
    TEST(second)
    {
      char temp[32] = " sample string.";
      char* result, *mustBe;
      result = strtok (temp, " ,.-");
      mustBe = mystrtok(temp, " ,.-");
      CHECK_EQUAL(result, mustBe);
    }
  }
}
