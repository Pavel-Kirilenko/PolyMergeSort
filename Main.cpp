#include<iostream>
#include<random>
#include"Header.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    system("chcp 1251");      // ������ ��� ����������� ����������� ������������� ��������
    long arr_size = 2000000;  // ������ ������� ��� ����������
   // srand(0);
    int* array = new int[arr_size];
    for (long i = 0;i < arr_size; i++) {
        array[i] = rand() % 10000;
    }
    if (arr_size < 51)        // ���� ���������� ��������� � ������� �� �������� 50
    {
        cout << "������ �� ����������: " << endl;
        for (int i = 0; i < arr_size; i++) cout << array[i] << " ";  // ���������� ������ �� ����������
        cout << endl;
    }
    int r = arr_size - 1;
    int l = 0;
    cout << "������ �������� �������: " << endl;
    mergeSort(array, l, r);   // ������� ����������
    cout << "\n���������� ���������!" << endl;
    if (arr_size < 51)        // ���� ���������� ��������� � ������� �� �������� 50
    {
        cout << "������ ����� ����������: " << endl; 
        for (int i = 0; i < arr_size; i++) cout << array[i] << " ";  // ���������� ������ ����� ����������
    }

    delete[] array;

    return 0;
}

// ���. ������������� 04.12.2024