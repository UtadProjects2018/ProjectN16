//
//  CCom.cpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "CCom.hpp"

CCom::CCom()
{
    printf("Creating CCom object");
}

int CCom::Open(const char *pszName, TMode nMode)
{
    printf("Opening CCom port with Mode %d and fileName %s\n", nMode, pszName);
    return 1;
}

int CCom::Write(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Writing CCom port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

int CCom::Read(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Reading CCom port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

void CCom::Close(int iIdStream)
{
    printf("Closing CCom port with fileID %d\n", iIdStream);
}
