#include "LoadLogTestState.h"

#include <pantheios/pan.hpp>
#include <pantheios/backends/bec.file.h>

#include "PhxEngine.h"
#include "Timer.h"

extern "C" const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "PX";

void LoadLogTestState::Enter()
{
	pantheios_be_file_setFilePath("ArchivoDeLog.txt", PANTHEIOS_BE_FILE_F_TRUNCATE, PANTHEIOS_BE_FILE_F_TRUNCATE, PANTHEIOS_BEID_LOCAL);

	/*pantheios::log(pantheios::debug, "Entering main()");
	pantheios::log_DEBUG("debug");
	pantheios::log_INFORMATIONAL("informational");

	pan::log_NOTICE("notice");
	pantheios::log_WARNING("warning");
	pantheios::log_ERROR("error");
	pantheios::log_CRITICAL("critical");
	pantheios::log_ALERT("alert");
	pantheios::log_EMERGENCY("EMERGENCY");*/

	PhxEngine pxE;
	Timer auxTimer;

	pxE.Enter(&auxTimer,60.0f);
	pxE.Update();
	pxE.Exit();
	
}

void LoadLogTestState::Update(){}

void LoadLogTestState::Exit(){}