#include <iostream>

class Trapezoid {
private:
	double side1, side2, base1, base2; // base1, base2 - основания
	                                   //side1, side2 - боковые стороны
public:
	void initialize();
	void print();
	void changeSize(double times); // изменение сторон в определенное кол-во раз
	double Per(); // метод вычисления периметра и площади
	double Area(); // метод вычисления периметра и площади
	double coef_basess() const;
	bool simplesimilarity(Trapezoid const& tr);
	double coef_sides() const;
	bool similarity(Trapezoid const& tr); // подобна ли другая трапеция данной
	double midline();// метод вычисления средней линии 
	double height(); // метод вычисления высоты
};