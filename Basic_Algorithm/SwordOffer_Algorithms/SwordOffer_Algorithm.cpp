#include "SwordOffer_Algorithm.h"
#include <string>

//1. 赋值运算符的实现
//初级程序员方法
//1）.返回当前实例自身引用，而不是void，为了支持连续赋值操作
//2）.输入参数为常量引用，为了避免传参的拷贝和函数内修改
//3）.释放实例的内存，避免内存泄露
//4）.判断传入的参数和当前的实例是否是同一个实例，避免先释放实例造成传入的参数所指向的内存被释放，导致找不到赋值的内容
CSwordOfferAlgorithm::CMyString& CSwordOfferAlgorithm::CMyString::operator=(const CMyString& vStr)
{
	if (this == &vStr)
		return *this;

	delete[]m_pStr;
	m_pStr = nullptr;//这一个赋值是否有必要，如果不置为空指针，应该会成为野指针

	m_pStr = new char[strlen(vStr.m_pStr) + 1];
	strcpy_s(m_pStr, sizeof(vStr.m_pStr), vStr.m_pStr);

	return *this;
}

//高级程序员方法
//考虑异常安全性原则：上面的程序在new时由于内存不足导致内存申请失败，此时原实例指向空指针，不再保持有效的状态，容易导致程序崩溃
//方法1：先new再delete，方法2：先创建一个临时实例，然后交换
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
