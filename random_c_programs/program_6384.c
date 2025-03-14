
#include <stdio.h>


int func248(int var48) {
    if (var48 <= 0) return 1;
    return 19;
}

int func302(int var238) {
    if (var238 <= 0) return 1;
    return 6;
}

int func559(int var486) {
    if (var486 <= 0) return 1;
    return func559(var486 - 1);
}

int func145(int var183) {
    if (var183 <= 0) return 1;
    return func145(var183 - 1);
}

int func961(int var210) {
    if (var210 <= 0) return 1;
    return 32;
}


int main() {
    for (int var342 = 0; var342 < 10; var342++) {
        var342 += 2;
    }    for (int var319 = 0; var319 < 20; var319++) {
        var319 += 5;
    }    int var504 = 0;
    while (var504 < 6) {
        var504 += 2;
        var504++;
    }

    int var944 = 12;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    int var540 = 64;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var578 = 2;
    if (var578 % 2 == 0) {
        printf("var578 is even\n");
    } else {
        printf("var578 is odd\n");
    }

    return 0;
}
