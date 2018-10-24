// chromium_winlog_demo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include "../src/logging.h"

int _tmain(int argc, _TCHAR* argv[])
{
  logging::LoggingSettings settings;
  settings.logging_dest = logging::LOG_TO_SYSTEM_DEBUG_LOG;
  logging::InitLogging(settings);

  //log�Ƿ��¼����id,�߳�id,ʱ�������ȷʱ��
  logging::SetLogItems(true, true, false, false);

  LOG(INFO) << "INFO";
  LOG(WARNING) << "WARNING";
  LOG(ERROR) << "ERROR";

  LOG_IF(INFO, true) << "LOG_IF INFO";
  LOG_IF(WARNING, false) << "LOG_IF WARNING";
  LOG_IF(ERROR, true) << "LOG_IF ERROR";

  system("pause");
	return 0;
}

