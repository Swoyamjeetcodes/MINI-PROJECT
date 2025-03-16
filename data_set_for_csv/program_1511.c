
#include <stdio.h>


int func514(int var557) {
    if (var557 <= 0) return 1;
    return func514(var557 - 1);
}


int main() {
    for (int var168 = 0; var168 < 20; var168++) {
        var168 += 5;
    }    int var1 = 0;
    while (var1 < 19) {
        var1 += 5;
        var1++;
    }    int var632 = 0;
    while (var632 < 6) {
        var632 += 4;
        var632++;
    }    int var189 = 0;
    while (var189 < 17) {
        var189 += 3;
        var189++;
    }    int var723 = 0;
    while (var723 < 15) {
        var723 += 5;
        var723++;
    }

    int var284 = 91;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
