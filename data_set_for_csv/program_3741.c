
#include <stdio.h>


int func148(int var61) {
    if (var61 <= 0) return 1;
    return func148(var61 - 1);
}


int main() {
    for (int var507 = 0; var507 < 18; var507++) {
        var507 += 1;
    }

    int var142 = 33;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
