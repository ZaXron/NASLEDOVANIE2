#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	string continent;
	string spacies;
	double weight;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) {
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() {
		cout << "Input name - ";
		cin >> name;

		cout << "Input kingdown - ";
		cin >> spacies;

		cout << "Input weight - ";
		cin >> weight;

		cout << "Input continent - ";
		cin >> continent;
	}
	void Print() {
		cout << "Name - " << name << endl << "Spacies - " << spacies << endl << "Weight - " << weight << endl << "Continent - " << continent << endl;
	}
	void Eat() {
		cout << "-";
	}
	void Sound() {
		cout << "-";
	}
};

class Elephant :public Animal {
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "POO-OOO-OOO" << endl;
	}
	void Eat() {
		cout << "herbivores" << endl;
	}
};

class Cat :public Animal {
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Meow-Meow" << endl;
	}
	void Eat() {
		cout << "MEAT-EATERS" << endl;
	}
};

class Dog :public Animal {
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "Bark-bark" << endl;
	}
	void Eat() {
		cout << "MEAT-EATERS" << endl;
	}
};

class Parrot :public Animal {
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() {
		cout << "KAR-KAR" << endl;
	}
	void Eat() {
		cout << "herbivores" << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	Elephant obj1("African elephant", "Elephant", "Africa", 5000);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Cat obj2("Home Cat", "Cats", "Everywhere", 12);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
	cout << endl << endl;

	Dog obj3; ("Husky", "Dogs", "Europe,Asia,America,Maybe Africa", 15);
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();

	Parrot obj4; ("Red", "Parrots", "Europe,Asia,America,Maybe Africa", 15);
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();
}