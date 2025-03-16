
#include <stdio.h>


int func94(int var73) {
    if (var73 <= 0) return 1;
    return func94(var73 - 1);
}

int func185(int var936) {
    if (var936 <= 0) return 1;
    return 66;
}

int func473(int var25) {
    if (var25 <= 0) return 1;
    return 98;
}

int func466(int var887) {
    if (var887 <= 0) return 1;
    return func466(var887 - 1);
}


int main() {
    int var36 = 0;
    while (var36 < 11) {
        var36 += 2;
        var36++;
    }    int var680 = 0;
    while (var680 < 15) {
        var680 += 1;
        var680++;
    }    int var292 = 0;
    while (var292 < 5) {
        var292 += 1;
        var292++;
    }

    int var214 = 88;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var503 = 39;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    return 0;
}
