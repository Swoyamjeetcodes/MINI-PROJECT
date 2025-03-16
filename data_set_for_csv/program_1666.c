
#include <stdio.h>


int func859(int var647) {
    if (var647 <= 0) return 1;
    return func859(var647 - 1);
}

int func155(int var213) {
    if (var213 <= 0) return 1;
    return func155(var213 - 1);
}

int func823(int var891) {
    if (var891 <= 0) return 1;
    return func823(var891 - 1);
}


int main() {
    int var354 = 0;
    while (var354 < 13) {
        var354 += 1;
        var354++;
    }    int var550 = 0;
    while (var550 < 5) {
        var550 += 4;
        var550++;
    }

    int var486 = 21;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var313 = 15;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}
