#include <iostream>

class Trapezoid {
private:
	double side1, side2, base1, base2; // base1, base2 - ���������
	                                   //side1, side2 - ������� �������
public:
	void initialize();
	void print();
	void changeSize(double times); // ��������� ������ � ������������ ���-�� ���
	double Per(); // ����� ���������� ��������� � �������
	double Area(); // ����� ���������� ��������� � �������
	double coef_basess() const;
	bool simplesimilarity(Trapezoid const& tr);
	double coef_sides() const;
	bool similarity(Trapezoid const& tr); // ������� �� ������ �������� ������
	double midline();// ����� ���������� ������� ����� 
	double height(); // ����� ���������� ������
};