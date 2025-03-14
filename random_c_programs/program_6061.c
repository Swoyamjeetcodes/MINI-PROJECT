
#include <stdio.h>


int func609(int var537) {
    if (var537 <= 0) return 1;
    return func609(var537 - 1);
}

int func809(int var723) {
    if (var723 <= 0) return 1;
    return 4;
}


int main() {
    int var935 = 0;
    while (var935 < 7) {
        var935 += 4;
        var935++;
    }    int var795 = 0;
    while (var795 < 10) {
        var795 += 5;
        var795++;
    }

    int var164 = 77;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
