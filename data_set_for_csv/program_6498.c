
#include <stdio.h>


int func779(int var145) {
    if (var145 <= 0) return 1;
    return 50;
}

int func767(int var497) {
    if (var497 <= 0) return 1;
    return func767(var497 - 1);
}

int func209(int var206) {
    if (var206 <= 0) return 1;
    return 53;
}


int main() {
    for (int var78 = 0; var78 < 19; var78++) {
        var78 += 2;
    }    for (int var293 = 0; var293 < 10; var293++) {
        var293 += 2;
    }    int var195 = 0;
    while (var195 < 19) {
        var195 += 3;
        var195++;
    }

    int var393 = 19;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
