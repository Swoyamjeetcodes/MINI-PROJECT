
#include <stdio.h>


int func160(int var862) {
    if (var862 <= 0) return 1;
    return func160(var862 - 1);
}


int main() {
    for (int var387 = 0; var387 < 10; var387++) {
        var387 += 1;
    }    for (int var401 = 0; var401 < 12; var401++) {
        var401 += 5;
    }    int var146 = 0;
    while (var146 < 10) {
        var146 += 2;
        var146++;
    }    for (int var849 = 0; var849 < 7; var849++) {
        var849 += 1;
    }    for (int var828 = 0; var828 < 14; var828++) {
        var828 += 5;
    }    for (int var965 = 0; var965 < 16; var965++) {
        var965 += 1;
    }

    int var51 = 29;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var418 = 9;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    int var880 = 31;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
