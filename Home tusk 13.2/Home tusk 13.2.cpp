#include <iostream>
using namespace std;
void func1() {
    const int n = 5;
    int arr[n]{ 1,8,4,5,2 };
    int arr1[n];
    int* ptr = arr;
    int* ptr2 = arr1;
    cout << "Первый массив " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Второй массив " << endl;
    for (int i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr + i);
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;
}
void func2() {
    const int n = 5;
    int arr[n]{ 1,8,4,5,2 };
    int* ptr = arr;
    int temp;
    cout << "Первый массив " << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Второй массив " << endl;
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        temp = *(ptr + i);
        temp = *(ptr + j);
        cout << *(ptr + j) << " ";
    }
    cout << endl;
   
}
void func3() {
    const int n = 5;
    int arr[n]{ 1,8,4,5,2 };
    int arr1[n];
    int* ptr = arr;
    int* ptr2 = arr1;
    cout << "Первый массив " << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "Второй массив " << endl;
    for (int i = 0,j=n; i < n; i++,j--) {
        *(ptr2 + i) = *(ptr + j-1);
        cout << *(ptr2 + i) << " ";
    }
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "");

    //func1();
    //func2();
    //func3();

}
