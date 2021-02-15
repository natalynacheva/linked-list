#include <iostream>

using namespace std;

typedef struct Element* po;
struct Element
{
	po Next;
	char Data;

};


int main() {
	//zad 1 nareden lineen spisak
	/*zad 1
	int x;
	po na = nullptr;
	po razuz = nullptr;
	po contr = nullptr;
	po p = nullptr;
	cout << "Vkarai chislo ili 0 za da prikliuchish: ";
	cin >> x;
	while (x != 0)
	{
		p = new Element;
		p->Data = x;
		p->Next = nullptr;
		razuz = na;
		if (na == nullptr) {
			na = p;
		}
		else
		{
			while (razuz != nullptr && razuz->Data <= x)
			{
				razuz = razuz->Next;
			}
			contr = na;
			while (contr->Next != nullptr && contr->Next != razuz && razuz != na)
			{
				contr = contr->Next;
			}
			p->Next = razuz;
			if (razuz == na)
			{
				na = p;
			}
			else {
				contr->Next = p;
			}
		}


		cout << "Vkarai oshte edno chislo ili 0 za da prikliuchish: ";
		cin >> x;
	}

	p = na;
	while (p != nullptr) {

		cout << p->Data << " ";
		p = p->Next;
	}
	cout << endl;
	
		*/
	//zad 2 opashka
	char x;
	po beg;
	po end;
	cout << "Vuvedi element: (za stop vuvedi 0) ";
	cin >> x;
	cout << endl;
    po p = new Element;
	p->Data = x;
	p->Next = nullptr;

	end = p;
	beg = p;
	
	while (x != '0')
	{
		cout << "Vuvedi element: (za stop vuvedi 0) ";
		cin >> x;

		if (x == '0') {
			break;
		}
		p = new Element;
		p->Data = x;
		p->Next = nullptr;

		end->Next = p;
		end = p;
	}
	p = beg;
	while (p != nullptr) {

		cout << p->Data << " ";
		p = p->Next;
	}
	
	int mahameLi=10;
	while (mahameLi>0)
	{
		cout << " iskash li da mahnesh purviq element ot opashkata? 1- da, 0- ne, izhod- otricatelno chislo"<<endl;
		cin >> mahameLi;
		cout << endl;
		if (mahameLi) {
			p = beg;
			beg = p->Next;
			delete p;
		}
		p = beg;
		while (p != nullptr) {

			cout << p->Data << " ";
			p = p->Next;
		}
	}
	return 0;
}
