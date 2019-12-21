

							//Воротников Кирилл ИСП-О-18. Пример №6
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	float x, p;
	cout << "\nВведите x ="; cin >> x;
p = x - pow(x,3)/3 + pow(x,5)/5;
cout << "\nОтвет =" << p << endl;
return 0;
}