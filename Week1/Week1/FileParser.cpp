//
//  FileParser.cpp
//  Week1
//
//  Created by Theo Guarriello on 10/8/15.
//  Copyright © 2015 Theo Guarriello. All rights reserved.
//

#include "FileParser.hpp"



FileParser* FileParser::m_pInstance = NULL;

FileParser* FileParser::Instance()
{
    if(!m_pInstance)
        m_pInstance = new FileParser;
    
    return m_pInstance;
}

bool FileParser::openFile(string newFile)
{
    fstream outfile(newFile);
    
    if(outfile.is_open())
    {
        cout << "File opened\n";
        return true;
    }
    else cout << "Unable to open file";
    
    return false;
    
}

bool FileParser::createFile(string newFileName)
{
    return true;
}