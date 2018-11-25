//
//  CCom.hpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef CCom_hpp
#define CCom_hpp

#include <stdio.h>
#include "CStream.hpp"

class CCom: public CStream
{
    
public:
    CCom();
    
    virtual int Open(const char *pszName, TMode nMode);
    virtual int Write(int iId, unsigned char *buffer, unsigned int uSize);
    virtual int Read(int iId, unsigned char *buffer, unsigned int uSize);
    virtual void Close(int iIdStream);
};


#endif /* CCom_hpp */
