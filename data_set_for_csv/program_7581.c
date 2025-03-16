
#include <stdio.h>


int func121(int var891) {
    if (var891 <= 0) return 1;
    return func121(var891 - 1);
}


int main() {
    int var165 = 0;
    while (var165 < 15) {
        var165 += 4;
        var165++;
    }    for (int var255 = 0; var255 < 15; var255++) {
        var255 += 4;
    }    int var287 = 0;
    while (var287 < 9) {
        var287 += 4;
        var287++;
    }

    int var215 = 8;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    return 0;
}
