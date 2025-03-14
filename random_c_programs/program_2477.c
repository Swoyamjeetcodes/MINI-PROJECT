
#include <stdio.h>


int func832(int var188) {
    if (var188 <= 0) return 1;
    return func832(var188 - 1);
}

int func569(int var621) {
    if (var621 <= 0) return 1;
    return func569(var621 - 1);
}

int func496(int var773) {
    if (var773 <= 0) return 1;
    return 75;
}


int main() {
    int var4 = 0;
    while (var4 < 20) {
        var4 += 5;
        var4++;
    }    for (int var110 = 0; var110 < 7; var110++) {
        var110 += 4;
    }    for (int var6 = 0; var6 < 8; var6++) {
        var6 += 1;
    }

    int var463 = 32;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var977 = 84;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var798 = 89;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
