
#include <stdio.h>


int func648(int var730) {
    if (var730 <= 0) return 1;
    return func648(var730 - 1);
}

int func321(int var920) {
    if (var920 <= 0) return 1;
    return 10;
}


int main() {
    for (int var706 = 0; var706 < 6; var706++) {
        var706 += 1;
    }    for (int var724 = 0; var724 < 6; var724++) {
        var724 += 1;
    }

    int var838 = 14;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    int var478 = 45;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    return 0;
}
