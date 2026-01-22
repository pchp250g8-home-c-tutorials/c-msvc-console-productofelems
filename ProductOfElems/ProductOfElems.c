// ProductOfElems.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(int argc, char* argv[])
{
    int nElems;
    short* iArray;
    long nProduct;
    system("cls");
    printf("Input a count of elements in array\r\n");
    scanf_s("%d", &nElems);
    iArray = calloc(nElems, sizeof(short));
    if (iArray == NULL) return -1;
    nProduct = 1;
    srand(time(NULL));
    for (int i = 0; i < nElems; i++)
    {
        iArray[i] = 1 + rand() % 10;
    }
    printf("Inputed array : ");
    for (int i = 0; i < nElems; i++)
    {
        nProduct *= iArray[i];
        printf("%d ", iArray[i]);
    }
    free(iArray);
    printf("\r\nThe Product of %d elements of the array is : %d\r\n", nElems, nProduct);
    _fgetchar();
    fgetc(stdin);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
