#pragma once

class CSwordOfferAlgorithm
{
public:

	//1. 赋值运算符函数的实现
	class CMyString
	{
	public:
		CMyString(char* vStr = nullptr) {}
		CMyString(const CMyString& vStr) {}
		~CMyString() {}

		//初级程序员方法
		CMyString& operator=(const CMyString& vStr);
		//高级程序员方法
		//CMyString& operator=(const CMyString& vStr);
		CMyString& Operator1(const CMyString& vStr);

	private:
		char* m_pStr;
	};

	//2. 
private:
};