
#include <stdio.h>


int func225(int var685) {
    if (var685 <= 0) return 1;
    return func225(var685 - 1);
}


int main() {
    for (int var404 = 0; var404 < 19; var404++) {
        var404 += 4;
    }    int var922 = 0;
    while (var922 < 20) {
        var922 += 5;
        var922++;
    }    for (int var391 = 0; var391 < 10; var391++) {
        var391 += 4;
    }    int var891 = 0;
    while (var891 < 20) {
        var891 += 5;
        var891++;
    }    for (int var213 = 0; var213 < 11; var213++) {
        var213 += 1;
    }    int var651 = 0;
    while (var651 < 19) {
        var651 += 5;
        var651++;
    }

    int var699 = 62;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    int var260 = 10;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    int var108 = 97;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
