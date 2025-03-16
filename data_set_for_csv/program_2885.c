
#include <stdio.h>


int func603(int var345) {
    if (var345 <= 0) return 1;
    return func603(var345 - 1);
}


int main() {
    for (int var977 = 0; var977 < 14; var977++) {
        var977 += 4;
    }

    int var245 = 28;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    return 0;
}
