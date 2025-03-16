
#include <stdio.h>


int func177(int var534) {
    if (var534 <= 0) return 1;
    return func177(var534 - 1);
}

int func991(int var591) {
    if (var591 <= 0) return 1;
    return func991(var591 - 1);
}


int main() {
    int var694 = 0;
    while (var694 < 17) {
        var694 += 5;
        var694++;
    }    int var441 = 0;
    while (var441 < 16) {
        var441 += 4;
        var441++;
    }    int var769 = 0;
    while (var769 < 19) {
        var769 += 5;
        var769++;
    }

    int var51 = 55;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var394 = 32;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    return 0;
}
