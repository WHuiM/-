// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WEEK10TEST3_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WEEK10TEST3_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WEEK10TEST3_EXPORTS
#define WEEK10TEST3_API __declspec(dllexport)
#else
#define WEEK10TEST3_API __declspec(dllimport)
#endif

// �����Ǵ� week10Test.3.dll ������
class WEEK10TEST3_API Cweek10Test3 {
public:
	Cweek10Test3(void);
	// TODO:  �ڴ�������ķ�����
};
class WEEK10TEST3_API FAC {
public:
	float convert(float deg);
};
extern WEEK10TEST3_API int nweek10Test3;
WEEK10TEST3_API int factorial(int n);
WEEK10TEST3_API int fnweek10Test3(void);
