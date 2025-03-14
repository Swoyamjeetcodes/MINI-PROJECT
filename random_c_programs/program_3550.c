
#include <stdio.h>


int func144(int var592) {
    if (var592 <= 0) return 1;
    return func144(var592 - 1);
}

int func44(int var213) {
    if (var213 <= 0) return 1;
    return func44(var213 - 1);
}


int main() {
    int var77 = 0;
    while (var77 < 12) {
        var77 += 3;
        var77++;
    }    int var252 = 0;
    while (var252 < 10) {
        var252 += 3;
        var252++;
    }

    int var773 = 39;
    if (var773 % 2 == 0) {
        printf("var773 is even\n");
    } else {
        printf("var773 is odd\n");
    }

    int var135 = 90;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    return 0;
}
