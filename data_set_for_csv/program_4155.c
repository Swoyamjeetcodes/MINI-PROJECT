
#include <stdio.h>


int func506(int var195) {
    if (var195 <= 0) return 1;
    return func506(var195 - 1);
}


int main() {
    for (int var844 = 0; var844 < 14; var844++) {
        var844 += 3;
    }    int var788 = 0;
    while (var788 < 15) {
        var788 += 1;
        var788++;
    }    for (int var871 = 0; var871 < 13; var871++) {
        var871 += 5;
    }

    int var82 = 19;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var995 = 83;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
