
#include <stdio.h>


int func804(int var263) {
    if (var263 <= 0) return 1;
    return func804(var263 - 1);
}

int func936(int var903) {
    if (var903 <= 0) return 1;
    return func936(var903 - 1);
}

int func3(int var835) {
    if (var835 <= 0) return 1;
    return func3(var835 - 1);
}


int main() {
    int var738 = 0;
    while (var738 < 12) {
        var738 += 5;
        var738++;
    }

    int var951 = 19;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    return 0;
}
