#include <iostream>
#include "UnitTest++.h"
#include "MyString.h"
using namespace std;
int main()
{
 //tests is in TestString.cpp

  UnitTest::TestList& allTests (UnitTest::Test::GetTestList());
  UnitTest::TestList selected;
  UnitTest::Test* temp = allTests.GetHead();
  while(temp)
  {
    cout << "SuiteName:  "<<  temp->m_details.suiteName << endl;
    cout << "TestName:   " << temp->m_details.testName << endl;
    cout << "FileName:   " << temp->m_details.filename << endl;
    cout << "Line number: => " << temp->m_details.lineNumber << endl;
    temp = temp->next;
  }

  cout << endl << endl;

  return UnitTest::RunAllTests();
}
