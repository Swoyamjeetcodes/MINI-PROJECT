
#include <stdio.h>


int func14(int var557) {
    if (var557 <= 0) return 1;
    return func14(var557 - 1);
}


int main() {
    int var241 = 0;
    while (var241 < 14) {
        var241 += 1;
        var241++;
    }

    int var289 = 49;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    return 0;
}
