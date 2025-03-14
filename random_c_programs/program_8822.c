
#include <stdio.h>


int func353(int var23) {
    if (var23 <= 0) return 1;
    return func353(var23 - 1);
}

int func800(int var237) {
    if (var237 <= 0) return 1;
    return func800(var237 - 1);
}

int func261(int var631) {
    if (var631 <= 0) return 1;
    return func261(var631 - 1);
}


int main() {
    int var215 = 0;
    while (var215 < 20) {
        var215 += 3;
        var215++;
    }    for (int var409 = 0; var409 < 20; var409++) {
        var409 += 1;
    }

    int var559 = 10;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var7 = 6;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
