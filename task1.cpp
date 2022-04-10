#include <iostream>
using namespace std;
/*
1. Параметры квадрата
    Присвойте из консоли значение стороны квадрата **square_side**
    Вычислите и выведите на экран значения с краткими подписями:
    - периметра **square_P**
    - площади **square_S** квадрата
*/

int main() {
	double square_side;
    cout << "Side = ?" << endl;
    cin >> square_side;
    
    double square_P = 4 * square_side;
	double square_S = square_side * square_side;
	
	cout << "P = " << square_P << endl;
	cout << "S = " << square_S << endl;
    return 0;
}
