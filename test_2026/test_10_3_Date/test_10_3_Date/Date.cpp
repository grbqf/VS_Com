#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
//构造
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
//拷贝构造
Date::Date(const Date& d)
{
	this->_year = d._year;
	this->_month = d._month;
	this->_day = d._day;
}
void Date::print() const 
{
	cout << _year << "/" << _month << "/" << _day << endl;
}

//this---->d1
// d1 += 天数
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay (_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month ++;
		if (_month == 13)
		{
			_year += 1;
			_month = 1;
		}
	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp = *this;
	//tmp += day;
	tmp.operator+=(day);
	return tmp;
}

//this---->d1
// d1 -= 天数
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day < 1)
	{	
		_month--;
		if (_month == 0)
		{
			_year -= 1;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

//d1-d2
Date Date::operator-(int day)
{
	Date tmp = *this;
	//tmp -= day;
	tmp.operator-=(day);
	return tmp;
}

//d1 < d2
bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year )
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			if (_day < d._day)
			{
				return true;
			}
		} 
	}
	return false;
}
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date::operator>(const Date& d)
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}
bool Date::operator==(const Date& d)
{
	return 
		(_year == d._year) &&
		(_month == d._month) &&
		(_day == d._day);
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

bool Date::CheckDate()
{
	if (_month < 1 || _month > 12 ||
		_day < 1 || _day > GetMonthDay(_year, _month))
	{
		cout << "非法日期" << endl;// "--->" << *this << endl;
		return false;
	}
	return true;
}

//前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
//后置++
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

//d1 - d2
int Date::operator-(const Date& d)
{
	int flag = 1;
	Date max = *this;
	Date min = d;

	if (max < min)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	int n = 0;
	while (max != min)
	{
		++min;
		++n;
	}
	return n * flag;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << endl;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	while (1)
	{
		cout << "请依次输入年月日:>";
		in >> d._year >> d._month >> d._day;

		if (!d.CheckDate())
		{
			cout << "输入日期非法:";
			d.print();
			cout << "请重新输入!!!" << endl;
		}
		else
		{
			break;
		}
	}

	return in;
}