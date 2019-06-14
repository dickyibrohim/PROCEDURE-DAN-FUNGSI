#include <stdio.h>
#include <stdlib.h>
// dicky ibrohim
// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

int pertambahan (int a, int b)
{
    int hasil;
    hasil =a+b;
    return hasil;
}

int perkalian (int a, int b)
{
    int hasil;
    hasil =a*b;
    return hasil;
}
int pembagian (int a, int b)
{
    int hasil;
    hasil =a/b;
    return hasil;
}

// MAIN
int main()
{
    printf("Hasil pengurangan 5 - 2 = %d\n", pengurangan(5,2));
    printf("Hasil Pertambahan 5 + 2 = %d\n", pertambahan(5,2));
    printf("Hasil Perkalian   5 * 2 = %d\n", perkalian(5,2));
    printf("Hasil Pembagian   6 / 2 = %d\n", pembagian(6,2));
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

// MAIN
int main()
{
    printf("Hasil pengurangan 5 - 2 = %d", pengurangan(5,2));
    return 0;
}

*/
