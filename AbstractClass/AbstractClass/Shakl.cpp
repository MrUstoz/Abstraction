#include <iostream>
#include <string>

using namespace std;

class Shakl {
public:
	virtual void Chizish() = 0;

	void Print()
	{
		cout << "Shakl chizish boshlandi...\n";
	}
};

class uchburchak : public Shakl {
	void Chizish() override {
		cout << "Uchburchak chizildi...\n";
	}
};