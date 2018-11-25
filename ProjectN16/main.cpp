//
//  main.cpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>

#include "CCom.hpp"
#include "CFile.hpp"
#include "CTcp.hpp"



int main(int argc, const char * argv[])
{
    CCom *cComObject = new CCom();
    CFile *cFileObject = new CFile();
    CTcp  *cTcpObject = new CTcp();
    
    CStream * steams[] = { cComObject, cFileObject,cTcpObject};
    int steamsSize = sizeof(steams) / sizeof(*steams);
    
    for (unsigned int i = 0; i < steamsSize; i++)
    {
        steams[i]->Open("steamsFile", CStream::EMode_Read);
    }
    
    for (unsigned int i = 0; i < steamsSize; i++)
    {
        steams[i]->Close(1);
    }


    return 0;
}
