
#include <stdio.h>


int func760(int var833) {
    if (var833 <= 0) return 1;
    return func760(var833 - 1);
}

int func432(int var391) {
    if (var391 <= 0) return 1;
    return func432(var391 - 1);
}

int func876(int var152) {
    if (var152 <= 0) return 1;
    return func876(var152 - 1);
}

int func723(int var963) {
    if (var963 <= 0) return 1;
    return func723(var963 - 1);
}

int func515(int var570) {
    if (var570 <= 0) return 1;
    return func515(var570 - 1);
}


int main() {
    int var932 = 0;
    while (var932 < 18) {
        var932 += 4;
        var932++;
    }    for (int var523 = 0; var523 < 18; var523++) {
        var523 += 3;
    }

    int var973 = 61;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    int var22 = 96;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    int var428 = 52;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    return 0;
}
