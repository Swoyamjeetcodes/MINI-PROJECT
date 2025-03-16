
#include <stdio.h>


int func540(int var655) {
    if (var655 <= 0) return 1;
    return func540(var655 - 1);
}

int func118(int var870) {
    if (var870 <= 0) return 1;
    return 60;
}

int func836(int var140) {
    if (var140 <= 0) return 1;
    return 36;
}


int main() {
    for (int var93 = 0; var93 < 19; var93++) {
        var93 += 2;
    }    for (int var559 = 0; var559 < 17; var559++) {
        var559 += 2;
    }    for (int var813 = 0; var813 < 14; var813++) {
        var813 += 4;
    }

    int var137 = 15;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
