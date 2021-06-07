#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
#include   "shellapi.h "


// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

//容器
#include<string>
#include<list>
#include<map>
using std::list;
using std::map;

#ifdef _UNICODE
#define tstring std::wstring
#else
#define tstring std::string
#endif

//工具库
#include "package/IUtils.h"
class CDebug {
public:
	void log(tstring tStrData) {
		tStrData += '\n';
		OutputDebugString(tStrData.data());
	}
};
CDebug Debug;


