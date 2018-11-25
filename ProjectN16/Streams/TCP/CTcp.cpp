//
//  CTcp.cpp
//  ProjectN16
//
//  Created by pc-laptop on 11/24/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "CTcp.hpp"

CTcp::CTcp()
{
    printf("Creating CTcp object");
}

int CTcp::Open(const char *pszName, TMode nMode)
{
    printf("Opening CTcp port with Mode %d and fileName %s\n", nMode, pszName);
    return 1;
}

int CTcp::Write(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Writing CTcp port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

int CTcp::Read(int iId, unsigned char *buffer, unsigned int uSize)
{
    printf("Reading CTcp port with fileID %d and size %d\n", iId, uSize);
    return 0;
}

void CTcp::Close(int iIdStream)
{
    printf("Closing CTcp port with fileID %d\n", iIdStream);
}
