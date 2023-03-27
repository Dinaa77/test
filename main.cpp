#include <iostream>
#include <cstdio>

using namespace std;


//int main() {
//
//    int m1 = 3, m2 = 4, m3 = 2;
//    double  a = 45.50, b = 17.40, c = 31.50, A = a*m1, B = b*m2, C = c*m3;
//    printf("Масло за %d кг коштуе %f\n", m1, A);
//    printf("Сметана за %d кг коштуе %f\n", m2, B);
//    printf("Вершки за %d кг коштують %f\n", m3, C);
//    printf("Масло, вершки та сметана у сумі коштуе %f\n", A+B+C);
//    return 0;
//
//
//}
//
//int main() {
//    double  a = 45.50, b = 17.40, c = 31.50, A, B, C, D;
//    int  m1, m2, m3;
//    printf("m1: ");
//    scanf("%d", &m1);
//    printf("m2: ");
//    scanf("%d", &m2);
//    printf("m3: ");
//    scanf("%d", &m3);
//    A=m1*a;
//    B=m2*b;
//    C=m3*c;
//    D=A+B+C;
//    printf("A = %lf\n", A);
//    printf("B = %lf\n", B);
//    printf("C = %lf\n", C);
//    printf("D = %lf\n", D);
//    return 0;
//}

//int main(){
//    int m1 = 3, m2 = 4, m3 = 2;
//    double  a = 45.50, b = 17.40, c = 31.50, A = a*m1, B = b*m2, C = c*m3, D = A+B+C;
//    cout <<"A = "<< A << endl;
//    cout<<"B = "<< B << endl;
//    cout<<"C = "<< C << endl;
//    cout<<"D = "<< D << endl;
//    return 0;
//};

//int main(){
//    int m1, m2, m3;
//    double  a = 45.50, b = 17.40, c = 31.50, A, B, C, D;
//    cout <<"Введіть m1 = ";
//    cin >> m1;
//    A=m1*a;
//    cout <<"Введіть m2 = ";
//    cin >> m2;
//    B=m2*b;
//    cout <<"Введіть m3 = ";
//    cin >> m3;
//    C=m3*c;
//    D=A+B+C;
//    cout << fixed;
//    cout.precision(5);
//    cout<<"A = "<< A << endl;
//    cout<<"B = "<< B << endl;
//    cout<<"C = "<< C << endl;
//    cout<<"D = "<< D << endl;
//    return 0;
//};


//int main(){
//    int a;
//    cout << "\nВведіть a: ";
//    cin >> a;
//    (a > 99 && a < 1000 && a%2!=0) ? cout << "\nа непарне тризначне" : cout << "\nа не непарне тризначне" << endl;
//    system("pause");
//
//    return 0;
//}

int main() {
    int a, b, c, d;
    cout << "\nВведіть a: ";
    cin >> a;
    b = a/100;
    c = a%100;
    d = c*10 + b;
    cout << "D = " << d << endl;
    return 0;
}

