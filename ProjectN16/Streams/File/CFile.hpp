//
//  CFile.hpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef CFile_hpp
#define CFile_hpp

#include <stdio.h>
#include "CStream.hpp"

class CFile: public CStream
{
    
public:
    CFile();
    
    virtual int Open(const char *pszName, TMode nMode);
    virtual int Write(int iId, unsigned char *buffer, unsigned int uSize);
    virtual int Read(int iId, unsigned char *buffer, unsigned int uSize);
    virtual void Close(int iIdStream);
};

#endif /* CFile_hpp */
