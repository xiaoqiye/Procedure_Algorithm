#pragma once

class CSwordOfferAlgorithm
{
public:

	//1. ��ֵ�����������ʵ��
	class CMyString
	{
	public:
		CMyString(char* vStr = nullptr) {}
		CMyString(const CMyString& vStr) {}
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