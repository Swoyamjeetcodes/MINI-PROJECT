
#include <stdio.h>


int func505(int var223) {
    if (var223 <= 0) return 1;
    return func505(var223 - 1);
}


int main() {
    for (int var254 = 0; var254 < 13; var254++) {
        var254 += 1;
    }

    int var992 = 27;
    if (var992 % 2 == 0) {
        printf("var992 is even\n");
    } else {
        printf("var992 is odd\n");
    }

    return 0;
}
