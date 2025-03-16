
#include <stdio.h>


int func458(int var159) {
    if (var159 <= 0) return 1;
    return func458(var159 - 1);
}

int func430(int var181) {
    if (var181 <= 0) return 1;
    return func430(var181 - 1);
}


int main() {
    int var596 = 0;
    while (var596 < 12) {
        var596 += 1;
        var596++;
    }    for (int var425 = 0; var425 < 13; var425++) {
        var425 += 3;
    }    for (int var797 = 0; var797 < 15; var797++) {
        var797 += 4;
    }

    int var165 = 48;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var785 = 89;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var399 = 65;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    int var62 = 64;
    if (var62 % 2 == 0) {
        printf("var62 is even\n");
    } else {
        printf("var62 is odd\n");
    }

    return 0;
}
