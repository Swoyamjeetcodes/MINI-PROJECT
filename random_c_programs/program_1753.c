
#include <stdio.h>


int func487(int var434) {
    if (var434 <= 0) return 1;
    return func487(var434 - 1);
}


int main() {
    for (int var267 = 0; var267 < 10; var267++) {
        var267 += 5;
    }    int var403 = 0;
    while (var403 < 17) {
        var403 += 3;
        var403++;
    }

    int var497 = 1;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    int var569 = 38;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    int var836 = 96;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    return 0;
}
