
#include <stdio.h>


int func395(int var112) {
    if (var112 <= 0) return 1;
    return func395(var112 - 1);
}


int main() {
    for (int var26 = 0; var26 < 12; var26++) {
        var26 += 5;
    }

    int var764 = 22;
    if (var764 % 2 == 0) {
        printf("var764 is even\n");
    } else {
        printf("var764 is odd\n");
    }

    return 0;
}
