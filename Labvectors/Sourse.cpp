//
//  Sourse.cpp
//  Labvector
//
//  Created by Кирилл Зинкин on 29.05.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include <cmath>
#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix<int> a, b, c;
    cin >> a;
    b = a;
    cout << "operator == (b = a): " << static_cast<int>(a == b) << endl;
    c = a + b;
    cout << "operator + (a + b): " << endl << c << endl;
    c = a - b;
    cout << "operator - (a - b): " << endl<< c << endl;
    //c = a * b;
    cout << "operator * (a * b): " << endl << c << endl;
    cout << "a[1][1] = " << a[1][1] << endl;

    Vector<int> d, e, f, l;
    cin >> d;
    e = d;
    cout << "operator == (d = e): " << static_cast<int>(d == e) << endl;
    d.sort_quick(0, d.get_lenght() - 1);
    cout << "Sortirovka: " << endl << d << endl;
    f = d + e;
    cout << "operator + (a + b): " << endl << f << endl;
    f = d - e;
    cout << "operator - (a - b): " << endl << f << endl;
    f = d * e;
    cout << "operator * (a * b): " << endl << f << endl;
    f = d / e;
    cout << "operator / (a / b): " << endl << f << endl;
    cout << "a[1] = " << d[1] << endl;
    cout << "Vvedite matricy i vector: ";
    cin >> a >> d;
    auto l = a * d;
    cout << "Mat*vec = " << l << endl;


    return 0;
}
