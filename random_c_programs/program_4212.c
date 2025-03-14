
#include <stdio.h>


int func777(int var2) {
    if (var2 <= 0) return 1;
    return func777(var2 - 1);
}

int func165(int var981) {
    if (var981 <= 0) return 1;
    return func165(var981 - 1);
}

int func83(int var685) {
    if (var685 <= 0) return 1;
    return func83(var685 - 1);
}


int main() {
    for (int var881 = 0; var881 < 16; var881++) {
        var881 += 1;
    }    for (int var990 = 0; var990 < 8; var990++) {
        var990 += 4;
    }

    int var554 = 66;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    return 0;
}
