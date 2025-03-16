
#include <stdio.h>


int func333(int var563) {
    if (var563 <= 0) return 1;
    return 67;
}

int func868(int var352) {
    if (var352 <= 0) return 1;
    return func868(var352 - 1);
}


int main() {
    int var125 = 0;
    while (var125 < 19) {
        var125 += 2;
        var125++;
    }

    int var891 = 51;
    if (var891 % 2 == 0) {
        printf("var891 is even\n");
    } else {
        printf("var891 is odd\n");
    }

    return 0;
}
