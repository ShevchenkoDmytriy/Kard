#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>
#include <fstream>
using namespace std;
class Money
{
public:
	int t;
	int t1;
	char kard[20];
	char num[20];
	char sum[20];
	char spend[20];
	char category[20];
	char category1[20];
	char category2[20];
	Money Vvod();
	void Show(Money tmp);
	Money* Add(Money* mas, int& n)
	{
		mas = (Money*)realloc(mas, (n + 1) * sizeof(Money));
		mas[n] = Vvod();
		n++;
		return mas;
	}

	void Print(Money* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			Show(mas[i]);
			cout << "\n";
		}
	}
	Money* Del(Money* mas, int& n)
	{
		char str[30];
		cout << "Enter card number : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].num, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Money*)realloc(mas, (n - 1) * sizeof(Money));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Card - delete.\n";
		}
		return mas;
	}
	void Find(Money* mas, int n)
	{
		char str[15];
		cout << "Enter kard number : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].num, str) == 0)
			{
				Show(mas[i]);
				f = 1;
				int c;
				cout << "\nEnter the replenishmnt amount : ";
				cin >> c;
				t = t + c;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
	void Sort(Money* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = n-1; j > i; j--)
			{
				if (_stricmp(mas[j].spend, mas[j - 1].spend) < 0)
				{
					swap(mas[j], mas[j - 1]);
				}
			}
		}
	}
	void Write(Money* mas)
	{
		ofstream out;
		out.open("text.txt", ios::app);
		if (out.is_open())
		{
			out << mas;
		}
		else
		{
			cout << "ERROR!!";
		}
	}
};
Money Money::Vvod()
{
	Money tmp;
	cout << "Enter kard type (VISA,MASTER KARD) : ";
	gets_s(tmp.kard);
	cout << "Enter kard number : ";
	gets_s(tmp.num);
ret1:	cout << "Enter the amount you want to top up : ";
	cin >> tmp.sum;
	for (int  i = 0; i < 10; i++)
	{
		if (isdigit(tmp.sum[i]) != 0)
		{
			t = atoi(tmp.sum);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret1;
		}
	}
ret2:	cout << "Enter average cost per month : ";
	cin >> tmp.spend;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.spend[i]) != 0)
		{
			t = atoi(tmp.spend);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret2;
		}
	}
ret3:	cout << "Enter average monthly food expenses : ";
	cin >> tmp.category;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category[i]) != 0)
		{
			t = atoi(tmp.category);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret3;
		}
	}
ret4:	cout << "Enter average cost per month for clothes : ";
	cin >> tmp.category1;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category1[i]) != 0)
		{
			t = atoi(tmp.category1);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret4;
		}
	}
ret5:	cout << "Enter average cost per month for utilities : ";
	cin >> tmp.category2;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category2[i]) != 0)
		{
			t = atoi(tmp.category2);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret5;
		}
	}
	cin.ignore();
	return tmp;

}
inline void Money::Show(Money tmp)
{
	cout << "- - - - - -KARD- - - - - -\n";
	cout << tmp.kard << "\t" << tmp.num << "\t"<<tmp.sum<<" UAH\n"<<"Spend in month : " <<tmp.spend <<" UAH"<<"\nFood : " << tmp.category << " UAH" <<"\nClothrs : "<<tmp.category1 << " UAH" <<"\nUtillities : "  <<tmp.category2 << " UAH";
}
class Virt
{
public:
	int t2;
	int t3;
	char kard1[20];
	char num1[20];
	char sum1[20];
	char spend1[20];
	char category4[20];
	char category5[20];
	char category6[20];
	Virt Vvod1();
	void Show1(Virt tmp1);
	Virt* Add1(Virt* mas, int& n)
	{
		mas = (Virt*)realloc(mas, (n + 1) * sizeof(Virt));
		mas[n] = Vvod1();
		n++;
		return mas;
	}

	void Print1(Virt* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			Show1(mas[i]);
			cout << "\n";
		}
	}
	Virt* Del2(Virt* mas, int& n)
	{
		char str[30];
		cout << "Enter folder name : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].num1, str) == 0)
			{
				for (int j = i; j < n - 1; j++)
					mas[j] = mas[j + 1];
				mas = (Virt*)realloc(mas, (n - 1) * sizeof(Virt));
				n--;
				i--;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout << "Error.\n";
		}
		else
		{
			cout << "Folder - delete.\n";
		}
		return mas;
	}
	void Find2(Virt* mas, int n)
	{
		char str[15];
		cout << "Enter name folder : ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < n; i++)
		{
			if (_stricmp(mas[i].num1, str) == 0)
			{
				Show1(mas[i]);
				f = 1;
			}
		}
		if (f == 0)
			cout << "Error.\n";
	}
	void Sort1(Virt* mas, int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1; j > i; j--)
			{
				if (_stricmp(mas[j].spend1, mas[j - 1].spend1) < 0)
				{
					swap(mas[j], mas[j - 1]);
				}
			}
		}
	}
	void Write(Virt* mas)
	{
		ofstream out;
		out.open("text.txt", ios::app);
		if (out.is_open())
		{
			out << mas;
		}
		else
		{
			cout << "ERROR!!";
		}
	}
};
Virt Virt::Vvod1()
{
	Virt tmp;
	cout << "Enter kard number : ";
	gets_s(tmp.num1);
ret1:	cout << "Enter the amount of replenishment of the card : ";
	cin >> tmp.sum1;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.sum1[i]) != 0)
		{
			t2 = atoi(tmp.sum1);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret1;
		}
	}
ret2:	cout << "Enter average cost per month : ";
	cin >> tmp.spend1;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.spend1[i]) != 0)
		{
			t3 = atoi(tmp.spend1);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret2;
		}
	}
ret3:	cout << "Enter average monthly food expenses : ";
	cin >> tmp.category4;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category4[i]) != 0)
		{
			t3 = atoi(tmp.category4);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret3;
		}
	}
ret4:	cout << "Enter average cost per month for clothes : ";
	cin >> tmp.category5;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category5[i]) != 0)
		{
			t3 = atoi(tmp.category5);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret4;
		}
	}
ret5:	cout << "Enter average cost per month for utilities : ";
	cin >> tmp.category6;
	for (int i = 0; i < 10; i++)
	{
		if (isdigit(tmp.category6[i]) != 0)
		{
			t3 = atoi(tmp.category6);
			break;
		}
		else
		{
			cout << "Try again :\n";
			goto ret5;
		}
	}
	cin.ignore();
	return tmp;

}
inline void Virt::Show1(Virt tmp)
{
	cout << tmp.num1 << "\t" << tmp.sum1 << " UAH\n" << "Spend in month : " << tmp.spend1 << " UAH" << "\nFood : " << tmp.category4 << " UAH" << "\nClothrs : " << tmp.category5 << " UAH" << "\nUtillities : " << tmp.category6<< " UAH";

}
int main()
{
	Money* baza = nullptr;
	Money x;
	Virt* baza1 = nullptr;
	Virt y;
	int n = 0;
	int n1 = 0;
	char ch;
	char cg;
	do
	{

		system("cls");
		cout << "Menu:\n";
		cout << "1.-Kard.\n";
		cout << "2.-Virtual wallet.\n";
		cout << "3.-Writing i file.\n";
		cout << "Esc - Vihod.\n";
		cout << "Your choice : ";
		ch = _getch();
		switch (ch)
		{
		case '1':
			system("cls");
			cout << "- - - - - - -CARD- - - - - - -";
			cout << "1.-Folder Data;\n";
			cout << "2.-Add kard and data;\n";
			cout << "3.-Card replenishment;\n";
			cout << "4.-Sort by average costs per month;\n";
			cout << "5.-Delete card;\n";
			cout << "Your choice : ";
			ch = _getch();
			switch (ch)
			{
			case '2':
				system("cls");
				baza = x.Add(baza, n);
				this_thread::sleep_for(chrono::milliseconds(2000));
				cout << "\nSuccessful addition !";
				this_thread::sleep_for(chrono::milliseconds(2000));
				break;
			case '1':
				system("cls");
				cout << "Wait - data processing:)\n";

				this_thread::sleep_for(chrono::milliseconds(3000));
				system("cls");
				if (n != 0)
				{
					x.Print(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '3':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n != 0)
				{
					x.Find(baza, n);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '5':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n != 0)
				{
					baza=x.Del(baza, n);
					cout << "Sorting happened.\n";
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '4':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n != 0)
				{
					x.Sort(baza, n);
					cout << "Sorting happened.\n";
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			}
		case '2':
			system("cls");
			cout << "- - - - - - -WALLET- - - - - - -";
			cout << "1.-Folder Data;\n";
			cout << "2.-Add virtual wallet\n";
			cout << "3.-Find virtual wallet;\n";
			cout << "4.-Delete virtual wallet;\n";
			cout << "5.-Sort by average costs per month\n";
			cout << "Your choice : ";
			cg = _getch();
			switch (cg)
			{
			case '2':
				system("cls");
				baza1 = y.Add1(baza1, n1);
				this_thread::sleep_for(chrono::milliseconds(2000));
				cout << "\nSuccessful addition !";
				this_thread::sleep_for(chrono::milliseconds(2000));
				break;
			case '1':
				system("cls");
				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n1 != 0)
				{
					y.Print1(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '3':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n1 != 0)
				{
					y.Find2(baza1, n1);
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '4':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n1 != 0)
				{
					baza1 = y.Del2(baza1, n1);
					cout << "Sorting happened.\n";
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			case '5':
				system("cls");				cout << "Wait - data processing:)\n";
				this_thread::sleep_for(chrono::milliseconds(3000));
				if (n1 != 0)
				{
					y.Sort1(baza1, n1);
					cout << "Sorting happened.\n";
				}
				else
				{
					cout << "Data baze is empty.\n";
				}
				system("pause");
				break;
			}
		case '3':
			system("cls");
			x.Write(baza);
			y.Write(baza1);
			this_thread::sleep_for(chrono::milliseconds(3000));
			cout << "Recording has accurred !!";
			system("pause");
			break;
		}
	} while (ch != 27);
}

