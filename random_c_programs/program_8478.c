
#include <stdio.h>


int func104(int var77) {
    if (var77 <= 0) return 1;
    return func104(var77 - 1);
}

int func716(int var350) {
    if (var350 <= 0) return 1;
    return 29;
}

int func218(int var220) {
    if (var220 <= 0) return 1;
    return func218(var220 - 1);
}

int func961(int var947) {
    if (var947 <= 0) return 1;
    return func961(var947 - 1);
}

int func815(int var737) {
    if (var737 <= 0) return 1;
    return func815(var737 - 1);
}

int func168(int var267) {
    if (var267 <= 0) return 1;
    return 54;
}


int main() {
    for (int var338 = 0; var338 < 10; var338++) {
        var338 += 4;
    }    for (int var202 = 0; var202 < 16; var202++) {
        var202 += 5;
    }

    int var134 = 50;
    if (var134 % 2 == 0) {
        printf("var134 is even\n");
    } else {
        printf("var134 is odd\n");
    }

    int var253 = 60;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
