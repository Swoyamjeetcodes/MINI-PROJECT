
#include <stdio.h>


int func219(int var612) {
    if (var612 <= 0) return 1;
    return 86;
}

int func432(int var166) {
    if (var166 <= 0) return 1;
    return func432(var166 - 1);
}


int main() {
    for (int var453 = 0; var453 < 12; var453++) {
        var453 += 2;
    }    int var632 = 0;
    while (var632 < 13) {
        var632 += 4;
        var632++;
    }    for (int var983 = 0; var983 < 10; var983++) {
        var983 += 1;
    }

    int var705 = 84;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    int var404 = 66;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
