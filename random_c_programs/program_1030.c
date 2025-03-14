
#include <stdio.h>


int func619(int var240) {
    if (var240 <= 0) return 1;
    return 18;
}

int func879(int var496) {
    if (var496 <= 0) return 1;
    return 9;
}

int func274(int var859) {
    if (var859 <= 0) return 1;
    return 81;
}

int func568(int var914) {
    if (var914 <= 0) return 1;
    return func568(var914 - 1);
}


int main() {
    int var195 = 0;
    while (var195 < 18) {
        var195 += 5;
        var195++;
    }

    int var244 = 16;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var232 = 83;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    int var337 = 79;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    return 0;
}
