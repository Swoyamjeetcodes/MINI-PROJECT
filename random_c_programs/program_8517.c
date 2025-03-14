
#include <stdio.h>


int func916(int var268) {
    if (var268 <= 0) return 1;
    return func916(var268 - 1);
}


int main() {
    for (int var58 = 0; var58 < 8; var58++) {
        var58 += 2;
    }    for (int var427 = 0; var427 < 10; var427++) {
        var427 += 2;
    }    for (int var14 = 0; var14 < 20; var14++) {
        var14 += 5;
    }

    int var769 = 65;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    int var400 = 22;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    return 0;
}
