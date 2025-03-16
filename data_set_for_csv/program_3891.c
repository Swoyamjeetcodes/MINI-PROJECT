
#include <stdio.h>


int func938(int var885) {
    if (var885 <= 0) return 1;
    return func938(var885 - 1);
}

int func392(int var565) {
    if (var565 <= 0) return 1;
    return func392(var565 - 1);
}

int func523(int var711) {
    if (var711 <= 0) return 1;
    return 47;
}


int main() {
    for (int var161 = 0; var161 < 12; var161++) {
        var161 += 5;
    }    for (int var74 = 0; var74 < 19; var74++) {
        var74 += 1;
    }

    int var301 = 47;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    return 0;
}
