#define POINTER const char* 
#define DLL__FUNCTION_CALL extern "C" __declspec(dllexport)

typedef struct FILE_MAPPING_INFO
{
	HANDLE fileMapping = NULL;
	POINTER begin = NULL;
	POINTER end = NULL;
	BOOL isOpened = false;
	int recordsCount = 0;
};