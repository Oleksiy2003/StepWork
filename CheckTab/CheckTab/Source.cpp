#include<iostream>
#include<cstdlib>
#include<string>
#include <clocale>     
using namespace std;
int main() {


	rand h = new rand();
	int[] mass1 = Enumerable.Range(1, 9).OrderBy(x = > r.Next()).ToArray();   //��������� ��� ��������� ������� ��1 �� 9 ��� ���������

	for (int i = 0;i<9;i++)
	{
		int[] mass2 = Enumerable.Range(1, 9).OrderBy(x = > r.Next()).ToArray();   //��������� ��������� ������
		for (int j = 0; j < 9; j++)
		{

			Console.WriteLine("������� ����� {0} * {1} ?", mass1[i], mass2[j]); //���������� �� ��������
			int x;

			while (!int.TryParse(Console.ReadLine(), out x) || x != mass1[i] * mass2[j]) //�������� ����� �� ������� ������������
				Console.WriteLine("�������� ���!");

			Console.WriteLine("�����!");
			Thread.Sleep(1000);//�����
			Console.Clear();    //������� �������
		}
	}
	system("pause");
	return 0;
}