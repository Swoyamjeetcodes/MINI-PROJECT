
#include <stdio.h>


int func219(int var914) {
    if (var914 <= 0) return 1;
    return func219(var914 - 1);
}


int main() {
    int var372 = 0;
    while (var372 < 19) {
        var372 += 1;
        var372++;
    }

    int var526 = 77;
    if (var526 % 2 == 0) {
        printf("var526 is even\n");
    } else {
        printf("var526 is odd\n");
    }

    return 0;
}
