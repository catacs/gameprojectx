#include "PhxPanLoger.h"


#include "Nxf.h"
#include "NxUserOutputStream.h"


#include <pantheios/pan.hpp>
#include <pantheios/inserters/integer.hpp> 

void PhxPanLoger::reportError (NxErrorCode code, const char *message, const char* file, int line)
{

	pantheios::log_ERROR("PhysX SDK: Error ", pan::integer((int)code), ": " , message, ", at file: ", file, ", line: ", pan::integer(line));

    if (code < NXE_DB_INFO)
    {
        pantheios::log_ERROR("PhysX SDK: Error unespected. Closing program");
        exit(1);
    }
}

NxAssertResponse PhxPanLoger::reportAssertViolation (const char *message, const char *file,int line)
{
	pantheios::log_CRITICAL("PhysX SDK : Assertion ", message, ", at file: ", file, ", line: ", pan::integer(line));

    assert(0);
    return NX_AR_CONTINUE;
}
     
void PhxPanLoger::print (const char *message)
{
	pantheios::log_INFORMATIONAL("PhysX SDK: ", message);

}
     
