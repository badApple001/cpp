#include "pch.h"
#include "IUtils.h"


void IUtils::wchar2char(const wchar_t* tchar, char* _char)
{
	int len = WideCharToMultiByte(CP_ACP, 0, tchar, -1, NULL, 0, NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, tchar, -1, _char, len, NULL, NULL);
}

void IUtils::char2wchar(const char* _char, wchar_t* tchar)
{
	int len = MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, tchar, len);
}
