
#include <stdio.h>


int func625(int var118) {
    if (var118 <= 0) return 1;
    return 95;
}

int func331(int var170) {
    if (var170 <= 0) return 1;
    return func331(var170 - 1);
}

int func843(int var70) {
    if (var70 <= 0) return 1;
    return 40;
}

int func260(int var91) {
    if (var91 <= 0) return 1;
    return func260(var91 - 1);
}

int func116(int var718) {
    if (var718 <= 0) return 1;
    return 91;
}


int main() {
    for (int var142 = 0; var142 < 7; var142++) {
        var142 += 2;
    }

    int var538 = 77;
    if (var538 % 2 == 0) {
        printf("var538 is even\n");
    } else {
        printf("var538 is odd\n");
    }

    return 0;
}
