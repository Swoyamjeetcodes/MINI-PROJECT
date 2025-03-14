
#include <stdio.h>


int func336(int var886) {
    if (var886 <= 0) return 1;
    return func336(var886 - 1);
}

int func351(int var249) {
    if (var249 <= 0) return 1;
    return func351(var249 - 1);
}


int main() {
    int var263 = 0;
    while (var263 < 12) {
        var263 += 3;
        var263++;
    }    for (int var158 = 0; var158 < 8; var158++) {
        var158 += 2;
    }    for (int var46 = 0; var46 < 20; var46++) {
        var46 += 1;
    }

    int var879 = 86;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var718 = 78;
    if (var718 % 2 == 0) {
        printf("var718 is even\n");
    } else {
        printf("var718 is odd\n");
    }

    int var164 = 36;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
