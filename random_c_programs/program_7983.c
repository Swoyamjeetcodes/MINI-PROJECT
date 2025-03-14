
#include <stdio.h>


int func458(int var926) {
    if (var926 <= 0) return 1;
    return func458(var926 - 1);
}


int main() {
    int var711 = 0;
    while (var711 < 20) {
        var711 += 3;
        var711++;
    }

    int var349 = 76;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
