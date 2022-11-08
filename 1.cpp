 //Написати програму для знаходження обсягу і температури в посудині.
#include <iostream>
#include <iomanip>
using namespace std;
 int main() 
{
	//Оголошуєм змінні
	//Змінюєм v1,v2,v3,t1,t2,t3 на a,b,c,d,g,h;
	int a,b,c,d,g,h,obem,temperatura;
	//Виводимо повідомлення для користувача
	cout <<"Vvedit chisla ";
	//Заносимо дані які ввели
	cin>>a>>b>>c>>d>>g>>h;
	obem=a+b+c;
    temperatura=(a*b*c+d*g*h)/obem;
    //Заносимо дані які ввів користувач в змінну
    //Встановлюємо заповнення порожніх позицій *
    cout<<setfill('.');
    int resultat_obema,resultat_temperatyru;
    //Встановлюєм мінімальну ширину поля 8 символів 
    //Точність чисел з плаваючею крапкою 4
    //Виводимо результат праграми
    cout<<"Obem stanovut="<<setw (8)<<setprecision(4)<<obem<<endl;
    cout<<"Temperatyra stanovut="<<setw (8)<<setprecision(4)<<temperatura<<endl;
    return 0;
}








