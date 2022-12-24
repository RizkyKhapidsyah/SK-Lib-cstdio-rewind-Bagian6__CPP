#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile = fopen("test.txt", "w+");
    int c;

    fputs("Haloo Programmer!.", pFile);

    rewind(pFile);

    c = getc(pFile);

    while (c != EOF) {
        putchar(c);
        c = getc(pFile);
    }

    fclose(pFile);

    _getch();
    return 0;
}