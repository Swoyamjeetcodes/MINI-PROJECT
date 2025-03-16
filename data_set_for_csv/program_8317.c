
#include <stdio.h>


int func557(int var848) {
    if (var848 <= 0) return 1;
    return 27;
}

int func199(int var37) {
    if (var37 <= 0) return 1;
    return 79;
}

int func705(int var84) {
    if (var84 <= 0) return 1;
    return func705(var84 - 1);
}


int main() {
    int var73 = 0;
    while (var73 < 11) {
        var73 += 3;
        var73++;
    }    int var900 = 0;
    while (var900 < 18) {
        var900 += 2;
        var900++;
    }

    int var981 = 50;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var265 = 36;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    int var770 = 40;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
