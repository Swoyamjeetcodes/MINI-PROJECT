
#include <stdio.h>


int func800(int var758) {
    if (var758 <= 0) return 1;
    return 79;
}

int func77(int var725) {
    if (var725 <= 0) return 1;
    return func77(var725 - 1);
}

int func873(int var258) {
    if (var258 <= 0) return 1;
    return 25;
}

int func827(int var403) {
    if (var403 <= 0) return 1;
    return func827(var403 - 1);
}


int main() {
    int var968 = 0;
    while (var968 < 12) {
        var968 += 2;
        var968++;
    }

    int var576 = 44;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    int var772 = 52;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
