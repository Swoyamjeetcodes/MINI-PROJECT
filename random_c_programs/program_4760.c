
#include <stdio.h>


int func645(int var848) {
    if (var848 <= 0) return 1;
    return func645(var848 - 1);
}


int main() {
    for (int var797 = 0; var797 < 16; var797++) {
        var797 += 2;
    }

    int var676 = 42;
    if (var676 % 2 == 0) {
        printf("var676 is even\n");
    } else {
        printf("var676 is odd\n");
    }

    return 0;
}
