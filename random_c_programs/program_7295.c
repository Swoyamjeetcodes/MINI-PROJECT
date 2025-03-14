
#include <stdio.h>


int func117(int var409) {
    if (var409 <= 0) return 1;
    return func117(var409 - 1);
}


int main() {
    int var711 = 0;
    while (var711 < 8) {
        var711 += 5;
        var711++;
    }

    int var95 = 30;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    return 0;
}
