
#include <stdio.h>


int func416(int var424) {
    if (var424 <= 0) return 1;
    return func416(var424 - 1);
}

int func831(int var326) {
    if (var326 <= 0) return 1;
    return func831(var326 - 1);
}

int func447(int var73) {
    if (var73 <= 0) return 1;
    return 47;
}

int func48(int var56) {
    if (var56 <= 0) return 1;
    return 74;
}

int func61(int var263) {
    if (var263 <= 0) return 1;
    return func61(var263 - 1);
}


int main() {
    int var456 = 0;
    while (var456 < 11) {
        var456 += 4;
        var456++;
    }

    int var163 = 83;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    return 0;
}
