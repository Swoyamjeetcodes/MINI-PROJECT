
#include <stdio.h>


int func493(int var66) {
    if (var66 <= 0) return 1;
    return func493(var66 - 1);
}


int main() {
    for (int var162 = 0; var162 < 10; var162++) {
        var162 += 2;
    }

    int var868 = 60;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    return 0;
}
