
#include <stdio.h>


int func835(int var629) {
    if (var629 <= 0) return 1;
    return func835(var629 - 1);
}

int func750(int var931) {
    if (var931 <= 0) return 1;
    return 99;
}

int func144(int var952) {
    if (var952 <= 0) return 1;
    return 22;
}


int main() {
    int var621 = 0;
    while (var621 < 9) {
        var621 += 1;
        var621++;
    }

    int var395 = 37;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    int var312 = 92;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    int var859 = 59;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    return 0;
}
