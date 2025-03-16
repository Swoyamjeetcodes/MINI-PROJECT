
#include <stdio.h>


int func525(int var218) {
    if (var218 <= 0) return 1;
    return 16;
}

int func467(int var511) {
    if (var511 <= 0) return 1;
    return func467(var511 - 1);
}


int main() {
    int var735 = 0;
    while (var735 < 10) {
        var735 += 4;
        var735++;
    }    for (int var141 = 0; var141 < 19; var141++) {
        var141 += 2;
    }

    int var154 = 57;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
