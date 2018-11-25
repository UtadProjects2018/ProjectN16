//
//  CStream.hpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef CStream_hpp
#define CStream_hpp

#include <stdio.h>

class CStream
{
public:
    enum TMode { EMode_Read, EMode_Write, Emode_ReadWrite };
    virtual int Open(const char *pszName, TMode nMode) = 0;
    virtual int Write(int iId, unsigned char *buffer, unsigned int uSize) = 0;
    virtual int Read(int iId, unsigned char *buffer, unsigned int uSize) = 0;
    virtual void Close(int iIdStream) = 0;
};

#endif /* CStream_hpp */
