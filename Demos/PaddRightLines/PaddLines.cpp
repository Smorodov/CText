#include <iostream>
#include "CText.h"
#include "tchar_utils.h"

int main()
{    
    CText input_name = _T("/data/Unsorted.txt");
    CText output_name = _T("/data/Padded.txt");

    CText pathIn = getcwd(0, 0); 
    CText pathOut = pathIn;
    pathIn += input_name;
    pathOut += output_name; 
    
    CText str;
    if(!str.readFile(pathIn.str()))
    {
        std::cerr << "Error, con not open file: " << pathIn.str() << std::endl;
        return 0;
    }
    str.linesPaddRight(_T('.'), 60);
    str.writeFile(pathOut.str(), CText::ENCODING_ASCII);
    return 0 ;
}
