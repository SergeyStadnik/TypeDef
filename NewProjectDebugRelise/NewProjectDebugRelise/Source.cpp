#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
using namespace std;
using si_t = short int;
typedef unsigned long long l_t;
/// <summary>
/// Сумирование двух целых чисел
/// </summary>
/// <param name="a">первое число</param>
/// <param name="b">второе число</param>
/// <returns>сумма а,b</returns>
int sum(int a, int b)
{
	return a + b;
}
/// <summary>
/// Сумирование двух дробных чисел
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
float sum(float a, float b)
{
	return a + b;
}
l_t sum(l_t a, l_t b)
{
	return a + b;
}
unsigned long long num1 = 101;
l_t num = 1001;

int main() {

	setlocale(0, "");
	srand(time(NULL));

	sum(2,2);


	system("pause");
	return 0;
}