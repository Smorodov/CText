#include <iostream>
#include "UnitTests.h"
#include "../CTEXT/CText.h"
int main()
{
    CText t = _T("Слово");
    CText result1 = _T('Ы') + t;
    CText result2 = _T("Ы") + t;
    unitTest();
}
