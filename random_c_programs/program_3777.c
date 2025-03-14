
#include <stdio.h>


int func934(int var667) {
    if (var667 <= 0) return 1;
    return 63;
}

int func561(int var949) {
    if (var949 <= 0) return 1;
    return func561(var949 - 1);
}


int main() {
    int var169 = 0;
    while (var169 < 8) {
        var169 += 5;
        var169++;
    }    int var764 = 0;
    while (var764 < 15) {
        var764 += 5;
        var764++;
    }

    int var224 = 88;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    return 0;
}
