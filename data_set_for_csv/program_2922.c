
#include <stdio.h>


int func695(int var796) {
    if (var796 <= 0) return 1;
    return func695(var796 - 1);
}

int func525(int var1) {
    if (var1 <= 0) return 1;
    return 52;
}


int main() {
    for (int var494 = 0; var494 < 13; var494++) {
        var494 += 3;
    }    for (int var275 = 0; var275 < 12; var275++) {
        var275 += 3;
    }

    int var134 = 23;
    if (var134 % 2 == 0) {
        printf("var134 is even\n");
    } else {
        printf("var134 is odd\n");
    }

    return 0;
}
