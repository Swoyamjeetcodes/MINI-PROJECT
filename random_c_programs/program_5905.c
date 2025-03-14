
#include <stdio.h>


int func273(int var903) {
    if (var903 <= 0) return 1;
    return func273(var903 - 1);
}


int main() {
    for (int var99 = 0; var99 < 7; var99++) {
        var99 += 4;
    }

    int var590 = 61;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
