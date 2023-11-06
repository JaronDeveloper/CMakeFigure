// CMakeFigure.cpp: определяет точку входа для приложения.
//

#include "CMakeFigure.h"
#include "FiguresH.h"
#include "Triangle.h"
#include "Quadrilateral.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Figures* triangle = new Triangle(10, 20, 30, 50, 60, 70);
	triangle->number = 3;
	print_info(triangle);
	delete triangle;

	Figures* quadrilateral = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilateral->number = 4;
	print_info(quadrilateral);
	delete quadrilateral;

	return 0;
}