#include "SwordOffer_Algorithm.h"
#include <string>

//1. ��ֵ�������ʵ��
//��������Ա����
//1��.���ص�ǰʵ���������ã�������void��Ϊ��֧��������ֵ����
//2��.�������Ϊ�������ã�Ϊ�˱��⴫�εĿ����ͺ������޸�
//3��.�ͷ�ʵ�����ڴ棬�����ڴ�й¶
//4��.�жϴ���Ĳ����͵�ǰ��ʵ���Ƿ���ͬһ��ʵ�����������ͷ�ʵ����ɴ���Ĳ�����ָ����ڴ汻�ͷţ������Ҳ�����ֵ������
CSwordOfferAlgorithm::CMyString& CSwordOfferAlgorithm::CMyString::operator=(const CMyString& vStr)
{
	if (this == &vStr)
		return *this;

	delete[]m_pStr;
	m_pStr = nullptr;//��һ����ֵ�Ƿ��б�Ҫ���������Ϊ��ָ�룬Ӧ�û��ΪҰָ��

	m_pStr = new char[strlen(vStr.m_pStr) + 1];
	strcpy_s(m_pStr, sizeof(vStr.m_pStr), vStr.m_pStr);

	return *this;
}

//�߼�����Ա����
//�����쳣��ȫ��ԭ������ĳ�����newʱ�����ڴ治�㵼���ڴ�����ʧ�ܣ���ʱԭʵ��ָ���ָ�룬���ٱ�����Ч��״̬�����׵��³������
//����1����new��delete������2���ȴ���һ����ʱʵ����Ȼ�󽻻�
//CSwordOfferAlgorithm::CMyString& CSwordOfferAlgorithm::CMyString::operator=(const CMyString& vStr)
CSwordOfferAlgorithm::CMyString& CSwordOfferAlgorithm::CMyString::Operator1(const CMyString& vStr)
{
	if (this != &vStr)
	{
		CMyString TempStr(vStr);

		char* TempChar = TempStr.m_pStr;
		TempStr.m_pStr = this->m_pStr;
		this->m_pStr = TempChar;

		return *this;
	}
}
