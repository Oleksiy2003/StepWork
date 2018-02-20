#include<iostream>
#include<cstdlib>
#include<string>
#include <clocale>     
using namespace std;
int main() {


	rand h = new rand();
	int[] mass1 = Enumerable.Range(1, 9).OrderBy(x = > r.Next()).ToArray();   //формируем два случайных массива от1 до 9 без поторений

	for (int i = 0;i<9;i++)
	{
		int[] mass2 = Enumerable.Range(1, 9).OrderBy(x = > r.Next()).ToArray();   //формируем случайный массив
		for (int j = 0; j < 9; j++)
		{

			Console.WriteLine("Сколько будет {0} * {1} ?", mass1[i], mass2[j]); //проходимся по массивам
			int x;

			while (!int.TryParse(Console.ReadLine(), out x) || x != mass1[i] * mass2[j]) //проверям верно ли ответил пользователь
				Console.WriteLine("Попробуй еще!");

			Console.WriteLine("Верно!");
			Thread.Sleep(1000);//пауза
			Console.Clear();    //очистка консоли
		}
	}
	system("pause");
	return 0;
}