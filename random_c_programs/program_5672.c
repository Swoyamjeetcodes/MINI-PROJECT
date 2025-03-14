
#include <stdio.h>


int func802(int var259) {
    if (var259 <= 0) return 1;
    return func802(var259 - 1);
}


int main() {
    for (int var498 = 0; var498 < 17; var498++) {
        var498 += 5;
    }

    int var839 = 85;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
