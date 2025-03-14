
#include <stdio.h>


int func611(int var729) {
    if (var729 <= 0) return 1;
    return 2;
}

int func481(int var299) {
    if (var299 <= 0) return 1;
    return func481(var299 - 1);
}

int func585(int var401) {
    if (var401 <= 0) return 1;
    return func585(var401 - 1);
}

int func220(int var533) {
    if (var533 <= 0) return 1;
    return func220(var533 - 1);
}

int func570(int var252) {
    if (var252 <= 0) return 1;
    return func570(var252 - 1);
}


int main() {
    for (int var389 = 0; var389 < 13; var389++) {
        var389 += 3;
    }    for (int var998 = 0; var998 < 6; var998++) {
        var998 += 2;
    }    for (int var82 = 0; var82 < 19; var82++) {
        var82 += 2;
    }    int var786 = 0;
    while (var786 < 20) {
        var786 += 1;
        var786++;
    }

    int var804 = 39;
    if (var804 % 2 == 0) {
        printf("var804 is even\n");
    } else {
        printf("var804 is odd\n");
    }

    int var53 = 89;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    return 0;
}
