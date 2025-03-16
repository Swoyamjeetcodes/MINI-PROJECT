
#include <stdio.h>


int func932(int var275) {
    if (var275 <= 0) return 1;
    return func932(var275 - 1);
}


int main() {
    for (int var545 = 0; var545 < 17; var545++) {
        var545 += 5;
    }

    int var740 = 78;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    return 0;
}
