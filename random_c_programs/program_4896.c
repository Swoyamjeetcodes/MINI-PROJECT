
#include <stdio.h>


int func870(int var975) {
    if (var975 <= 0) return 1;
    return func870(var975 - 1);
}


int main() {
    for (int var372 = 0; var372 < 7; var372++) {
        var372 += 1;
    }

    int var437 = 53;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
