
#include <stdio.h>


int func795(int var679) {
    if (var679 <= 0) return 1;
    return 63;
}

int func916(int var80) {
    if (var80 <= 0) return 1;
    return func916(var80 - 1);
}

int func137(int var661) {
    if (var661 <= 0) return 1;
    return 17;
}

int func144(int var449) {
    if (var449 <= 0) return 1;
    return func144(var449 - 1);
}


int main() {
    for (int var53 = 0; var53 < 5; var53++) {
        var53 += 5;
    }

    int var486 = 52;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    return 0;
}
