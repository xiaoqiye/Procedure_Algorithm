#pragma once
#include <iostream>

class CSwordOfferAlgorithm
{
public:

	//1. ��ֵ�����������ʵ��
	class CMyString
	{
	public:
		CMyString(char* vStr = nullptr) {}
		CMyString(const CMyString& vStr) {
			_ASSERTE(m_pStr == nullptr);
			m_pStr = new char[strlen(vStr.m_pStr) + 1];
			strcpy_s(m_pStr, sizeof(vStr.m_pStr), vStr.m_pStr);
		}
		~CMyString() {}

		//��������Ա����
		CMyString& operator=(const CMyString& vStr);
		//�߼�����Ա����
		//CMyString& operator=(const CMyString& vStr);
		CMyString& Operator1(const CMyString& vStr);

	private:
		char* m_pStr;
	};

	//2. 
private:
};