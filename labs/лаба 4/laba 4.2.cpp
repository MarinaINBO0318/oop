#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	Tiles(string b, int h, int w, int p) {
		brand = b;
		size_h = h;
		size_w = w;
		price = p;
	};
	void getData() {
		cout << "����� " << brand << " ����� " << size_h << " ������ " << size_w << " ���� " << price << endl;
	};
};

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	Tiles t1((string)"���������", 15, 11, 550);
	Tiles t2((string)"���������",55,45,9650);
	t1.getData();
	t2.getData();
	return 0;
}
