
#include <stdio.h>


int func913(int var941) {
    if (var941 <= 0) return 1;
    return 79;
}

int func124(int var683) {
    if (var683 <= 0) return 1;
    return func124(var683 - 1);
}

int func176(int var287) {
    if (var287 <= 0) return 1;
    return func176(var287 - 1);
}

int func523(int var117) {
    if (var117 <= 0) return 1;
    return 42;
}

int func687(int var230) {
    if (var230 <= 0) return 1;
    return 18;
}


int main() {
    for (int var320 = 0; var320 < 8; var320++) {
        var320 += 4;
    }    int var936 = 0;
    while (var936 < 8) {
        var936 += 2;
        var936++;
    }    int var611 = 0;
    while (var611 < 8) {
        var611 += 4;
        var611++;
    }

    int var223 = 49;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var905 = 22;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    return 0;
}
