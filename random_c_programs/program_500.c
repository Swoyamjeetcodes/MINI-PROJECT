
#include <stdio.h>


int func280(int var877) {
    if (var877 <= 0) return 1;
    return func280(var877 - 1);
}


int main() {
    int var125 = 0;
    while (var125 < 11) {
        var125 += 1;
        var125++;
    }

    int var205 = 20;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    return 0;
}
