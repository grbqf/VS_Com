#pragma once
#include<iostream>
using namespace std;

class Date
{
	// 友元函数声明
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d); 
public:
	Date(int year = 2005, int month = 9, int day = 8);
	void print();
	Date(const Date& d);
		
	int GetMonthDay(int year, int month)
	{
		static int arr[] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return arr[month];
	}

	bool operator< (const Date& d) ;
	bool operator<=(const Date& d) ;
	bool operator> (const Date& d) ;
	bool operator>=(const Date& d) ;
	bool operator==(const Date& d) ;
	bool operator!=(const Date& d) ;
	bool CheckDate();

	// d1 += 天数
	Date& operator+=(int day);
	Date  operator+ (int day) ;
	// d1 -= 天数
	Date& operator-=(int day);
	Date operator- (int day) ;

	// d1 - d2
	int operator- (const Date& d) ;

	// ++d1 -> d1.operator++()
	// d1++ -> d1.operator++(0)
	//前置++
	Date& operator++();
	//后置++
	Date  operator++(int);
	Date& operator--();
	Date  operator--(int);

	// 流插?
	// 不建议，因为Date* th
private:
	int _day;
	int _month;
	int _year;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);