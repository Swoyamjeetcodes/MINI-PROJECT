
#include <stdio.h>


int func393(int var764) {
    if (var764 <= 0) return 1;
    return func393(var764 - 1);
}


int main() {
    for (int var75 = 0; var75 < 12; var75++) {
        var75 += 1;
    }    for (int var788 = 0; var788 < 18; var788++) {
        var788 += 4;
    }    int var474 = 0;
    while (var474 < 8) {
        var474 += 4;
        var474++;
    }

    int var399 = 46;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    return 0;
}
