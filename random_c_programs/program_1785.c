
#include <stdio.h>


int func570(int var343) {
    if (var343 <= 0) return 1;
    return func570(var343 - 1);
}


int main() {
    int var404 = 0;
    while (var404 < 8) {
        var404 += 3;
        var404++;
    }

    int var895 = 3;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}
