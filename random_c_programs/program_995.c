
#include <stdio.h>


int func383(int var847) {
    if (var847 <= 0) return 1;
    return func383(var847 - 1);
}

int func737(int var650) {
    if (var650 <= 0) return 1;
    return func737(var650 - 1);
}

int func882(int var45) {
    if (var45 <= 0) return 1;
    return func882(var45 - 1);
}

int func637(int var428) {
    if (var428 <= 0) return 1;
    return 18;
}

int func200(int var79) {
    if (var79 <= 0) return 1;
    return func200(var79 - 1);
}


int main() {
    for (int var62 = 0; var62 < 5; var62++) {
        var62 += 1;
    }    int var956 = 0;
    while (var956 < 10) {
        var956 += 4;
        var956++;
    }

    int var537 = 11;
    if (var537 % 2 == 0) {
        printf("var537 is even\n");
    } else {
        printf("var537 is odd\n");
    }

    int var825 = 41;
    if (var825 % 2 == 0) {
        printf("var825 is even\n");
    } else {
        printf("var825 is odd\n");
    }

    return 0;
}
