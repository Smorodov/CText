#include <iostream>
#include "UnitTests.h"
#include "../CTEXT/CText.h"
int main()
{
    CText t = _T("Слово");
    CText result = _T('Ы')+t;
    unitTest();
}
