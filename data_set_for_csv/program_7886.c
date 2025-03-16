
#include <stdio.h>


int func392(int var376) {
    if (var376 <= 0) return 1;
    return func392(var376 - 1);
}


int main() {
    for (int var245 = 0; var245 < 12; var245++) {
        var245 += 2;
    }

    int var225 = 86;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
