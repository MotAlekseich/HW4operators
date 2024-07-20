#include <iostream>
#include <string>

class Overcoat {

private:
	std::string type;
	int size;
	int price;
public:
	Overcoat() : Overcoat(type = "classic", size = 52, price = 1000){}
	Overcoat(std::string type, int size, int price) {
		this->type = type;
		this->size = size;
		this->price = price;
	}

	bool operator ==(const Overcoat &other) const {
		return type == other.type;
	}
	void operator =(const Overcoat &other) {
		this->type = other.type;
		this->size = other.size;
		this->price = other.price;
	}
	void print() {
		std::cout << "Тип одежды - " << this->type << std::endl;
		std::cout << "Размер - " << this->size << std::endl;
		std::cout << "Цена - " << this->price << std::endl;
	}
	bool operator >(const Overcoat &other) {
		return this->price > other.price;
	}
	bool operator <(const Overcoat &other) {
		return this->price < other.price;
	}

};


class Flat {
private:
	double S;
	size_t price;
public:
	Flat() :Flat(S = 33, price = 3000000) {}
	Flat(double S, size_t price) {
		this->S = S;
		this->price = price;
	}
	bool operator ==(const Flat &other) {
		return this->S == other.S;
	}
	void operator =(const Flat& other) {
		this->S = other.S;
		this->price = other.price;
	}
	bool operator <(const Flat &other) {
		return this->price < other.price;
	}
	bool operator >(const Flat& other) {
		return this->price > other.price;
	}

};


int main() {
	//Задача 1
	setlocale(LC_ALL, "ru");
	Overcoat ov1("classic", 50, 1890);
	Overcoat ov3("classic", 150, 5000);
	Overcoat ov2();
	Overcoat ov4("sport", 48, 3000);
	ov1 = ov3;
	ov1.print();
	if (ov3 > ov4)
		std::cout << "классическая одежда дороже спортивной" << std::endl;
	//Задача 2
	Flat f1(33, 4000000);
	Flat f2(60, 6000000);
	if (f2 > f1)
		std::cout << "Двухкомнатная квартира стоит дороже однокомнатной" << std::endl;


	return 0;
}