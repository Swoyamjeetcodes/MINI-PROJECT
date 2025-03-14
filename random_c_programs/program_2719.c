
#include <stdio.h>


int func762(int var592) {
    if (var592 <= 0) return 1;
    return func762(var592 - 1);
}


int main() {
    for (int var226 = 0; var226 < 14; var226++) {
        var226 += 5;
    }

    int var824 = 2;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
