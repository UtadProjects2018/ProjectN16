//
//  CFile.cpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "CFile.hpp"

CFile::CFile()
{
    printf("Creating CFile object");
}

int CFile::Open(const char *pszName, TMode nMode)
{
    printf("Opening CFile port with Mode %d and fileName %s\n", nMode, pszName);
    return 1;
}

int CFile::Write(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Writing CFile port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

int CFile::Read(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Reading CFile port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

void CFile::Close(int iIdStream)
{
    printf("Closing CFile port with fileID %d\n", iIdStream);
}
