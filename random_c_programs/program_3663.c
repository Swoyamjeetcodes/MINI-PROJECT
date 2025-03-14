
#include <stdio.h>


int func753(int var796) {
    if (var796 <= 0) return 1;
    return func753(var796 - 1);
}

int func625(int var61) {
    if (var61 <= 0) return 1;
    return 18;
}

int func792(int var574) {
    if (var574 <= 0) return 1;
    return func792(var574 - 1);
}

int func689(int var930) {
    if (var930 <= 0) return 1;
    return func689(var930 - 1);
}

int func489(int var937) {
    if (var937 <= 0) return 1;
    return func489(var937 - 1);
}


int main() {
    for (int var990 = 0; var990 < 7; var990++) {
        var990 += 5;
    }

    int var996 = 85;
    if (var996 % 2 == 0) {
        printf("var996 is even\n");
    } else {
        printf("var996 is odd\n");
    }

    return 0;
}
