#include<iostream>
#include"Date.h"
#include<time.h>
using namespace std;


Date::Date()
{
	cout << "请输入雇员的生日(年、月、日)" << endl;
	cin >> year >> month >> day;
	if (year < 1900 || year>2018 || month < 1 || month>12 || day < 1 || day>31)
	{
		cout << "输入数据有误请重新输入" << endl;
		cin >> year >> month >> day;
	}

}

void Date::ShowBirthday()
{
	cout << "出生日期:" << endl;
	cout << year << "." << month << "." << day <<endl;
}

bool Date::ChechBirthday()
{
	time_t timer;
	time(&timer);
	tm* t_tm = localtime(&timer);
	if (t_tm->tm_mon+1 == month)
		return true;
	else
		return false;
}
