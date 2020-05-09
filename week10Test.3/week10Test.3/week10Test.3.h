// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 WEEK10TEST3_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// WEEK10TEST3_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef WEEK10TEST3_EXPORTS
#define WEEK10TEST3_API __declspec(dllexport)
#else
#define WEEK10TEST3_API __declspec(dllimport)
#endif

// 此类是从 week10Test.3.dll 导出的
class WEEK10TEST3_API Cweek10Test3 {
public:
	Cweek10Test3(void);
	// TODO:  在此添加您的方法。
};
class WEEK10TEST3_API FAC {
public:
	float convert(float deg);
};
extern WEEK10TEST3_API int nweek10Test3;
WEEK10TEST3_API int factorial(int n);
WEEK10TEST3_API int fnweek10Test3(void);
