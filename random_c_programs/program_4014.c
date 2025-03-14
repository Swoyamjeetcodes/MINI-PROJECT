
#include <stdio.h>


int func414(int var482) {
    if (var482 <= 0) return 1;
    return 53;
}

int func245(int var231) {
    if (var231 <= 0) return 1;
    return 43;
}

int func268(int var123) {
    if (var123 <= 0) return 1;
    return func268(var123 - 1);
}


int main() {
    for (int var890 = 0; var890 < 12; var890++) {
        var890 += 4;
    }    int var139 = 0;
    while (var139 < 7) {
        var139 += 4;
        var139++;
    }    int var560 = 0;
    while (var560 < 17) {
        var560 += 4;
        var560++;
    }    for (int var578 = 0; var578 < 6; var578++) {
        var578 += 4;
    }

    int var980 = 1;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    return 0;
}
