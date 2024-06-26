#include <iostream>
#include <string>

using namespace std;

class Animal {
public: 
	virtual void Ozuqa() = 0;
	virtual void Harakatlanish() = 0;
};


class Yolbars : public Animal {
	void Ozuqa() override {
		cout << "Yolbars yirtqich hayvon...\n";
	}
	void Harakatlanish() override {
		cout << "Tez harakatlanuvchi...\n";
	}
};

class Zebra : public Animal {
	void Ozuqa() override {
		cout << "Zebra o'txor hayvon...\n";
	}
	void Harakatlanish() override {
		cout << "Tez harakatlanuvchi...\n";
	}
};
