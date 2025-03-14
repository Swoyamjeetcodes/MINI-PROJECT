
#include <stdio.h>


int func345(int var104) {
    if (var104 <= 0) return 1;
    return func345(var104 - 1);
}


int main() {
    for (int var152 = 0; var152 < 12; var152++) {
        var152 += 5;
    }

    int var144 = 73;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
