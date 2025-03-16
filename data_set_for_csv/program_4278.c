
#include <stdio.h>


int func18(int var835) {
    if (var835 <= 0) return 1;
    return func18(var835 - 1);
}


int main() {
    int var374 = 0;
    while (var374 < 5) {
        var374 += 1;
        var374++;
    }

    int var215 = 65;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    return 0;
}
