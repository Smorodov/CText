#include <iostream>
#include "UnitTests.h"
#include "../CTEXT/CText.h"
int main()
{
    CText t = _T("�����");
    CText result = _T('�')+t;
    unitTest();
}
