#include <iostream>
#include "UnitTests.h"
#include "../CTEXT/CText.h"
int main()
{
    CText t = _T("�����");
    CText result1 = _T('�') + t;
    CText result2 = _T("�") + t;
    unitTest();
}
