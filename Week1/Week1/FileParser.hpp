//
//  FileParser.hpp
//  Week1
//
//  Created by Theo Guarriello on 10/8/15.
//  Copyright © 2015 Theo Guarriello. All rights reserved.
//

#ifndef FileParser_hpp
#define FileParser_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileParser
{
public:
    static FileParser* Instance();
    bool createFile(string newFile);
    bool openFile(string newFile);
    void writeToFile();
    bool closeFile();
    
private:
    FileParser(){};
    static FileParser* m_pInstance;
};

#endif /* FileParser_hpp */
