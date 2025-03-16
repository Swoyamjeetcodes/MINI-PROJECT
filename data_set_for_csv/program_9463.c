
#include <stdio.h>


int func325(int var899) {
    if (var899 <= 0) return 1;
    return func325(var899 - 1);
}

int func2(int var117) {
    if (var117 <= 0) return 1;
    return 72;
}

int func176(int var678) {
    if (var678 <= 0) return 1;
    return func176(var678 - 1);
}

int func95(int var116) {
    if (var116 <= 0) return 1;
    return 39;
}


int main() {
    for (int var113 = 0; var113 < 17; var113++) {
        var113 += 4;
    }    for (int var134 = 0; var134 < 7; var134++) {
        var134 += 1;
    }

    int var159 = 76;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
