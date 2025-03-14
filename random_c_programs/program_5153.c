
#include <stdio.h>


int func575(int var938) {
    if (var938 <= 0) return 1;
    return 20;
}

int func26(int var905) {
    if (var905 <= 0) return 1;
    return 89;
}

int func996(int var883) {
    if (var883 <= 0) return 1;
    return func996(var883 - 1);
}


int main() {
    int var768 = 0;
    while (var768 < 20) {
        var768 += 2;
        var768++;
    }    int var195 = 0;
    while (var195 < 18) {
        var195 += 3;
        var195++;
    }    for (int var553 = 0; var553 < 11; var553++) {
        var553 += 5;
    }

    int var764 = 27;
    if (var764 % 2 == 0) {
        printf("var764 is even\n");
    } else {
        printf("var764 is odd\n");
    }

    return 0;
}
