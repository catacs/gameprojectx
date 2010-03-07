#pragma once

#include "Nxf.h"
#include "NxUserOutputStream.h"


class PhxPanLoger : public NxUserOutputStream
{
    void reportError (NxErrorCode code, const char *message, const char* file, int line); 

    NxAssertResponse reportAssertViolation (const char *message, const char *file,int line);
            
    void print (const char *message);
};