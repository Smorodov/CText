#include <iostream>
#include "CText.h"
#include "tchar_utils.h"

int main()
{    
    CText input_name = _T("/data/Columbus.txt");
    CText output_name = _T("/data/Columbus_Sentences.txt");

    CText pathIn = getcwd(0, 0);
    CText pathOut = pathIn;
    pathIn += input_name;
    pathOut += output_name;
    
    CText str;
    if(!str.readFile(pathIn.str()))
    {
        std::cerr << "Error, can not open file: " << pathIn.str() << std::endl;
        return 0;
    }
    std::vector<CText> sentences;

    str.collectSentences(sentences);

    str.fromArray(sentences, _T("\n\n") );

    str.writeFile(pathOut.str(), CText::ENCODING_UTF8);

    return 0;
}
