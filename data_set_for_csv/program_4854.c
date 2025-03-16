
#include <stdio.h>


int func60(int var195) {
    if (var195 <= 0) return 1;
    return func60(var195 - 1);
}

int func365(int var965) {
    if (var965 <= 0) return 1;
    return func365(var965 - 1);
}


int main() {
    int var763 = 0;
    while (var763 < 7) {
        var763 += 3;
        var763++;
    }    for (int var762 = 0; var762 < 15; var762++) {
        var762 += 5;
    }    int var106 = 0;
    while (var106 < 20) {
        var106 += 4;
        var106++;
    }

    int var346 = 58;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
