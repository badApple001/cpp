// dlltest.h   ͷ�ļ���ʹ�ö�̬���ӿ�ʱ��Ҫ����ͷ�ļ�

#pragma once
#ifdef __DLLEXPORT
#define __DLL_EXP _declspec(dllexport)    // �������� - ����dll�ļ�ʱʹ��
#else
#define __DLL_EXP _declspec(dllimport)    // ���뺯�� -ʹ��dll��ʹ��
#endif // __DLLEXPORT

// �ж��Ƿ���c++
#if defined(__cplusplus)||defined(c_plusplus)
extern "C"
{
#endif

	class __DLL_EXP IUtils
	{
	public:

		static void wchar2char(const wchar_t* tchar, char* _char);
		static void char2wchar(const char* _char, wchar_t* tchar);

	};

#if defined(__cplusplus)||defined(c_plusplus)
}
#endif