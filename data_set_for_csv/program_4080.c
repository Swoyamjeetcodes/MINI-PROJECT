
#include <stdio.h>


int func775(int var873) {
    if (var873 <= 0) return 1;
    return 62;
}

int func1000(int var372) {
    if (var372 <= 0) return 1;
    return func1000(var372 - 1);
}

int func686(int var207) {
    if (var207 <= 0) return 1;
    return 5;
}

int func625(int var354) {
    if (var354 <= 0) return 1;
    return func625(var354 - 1);
}

int func47(int var906) {
    if (var906 <= 0) return 1;
    return 62;
}


int main() {
    for (int var341 = 0; var341 < 12; var341++) {
        var341 += 2;
    }    for (int var363 = 0; var363 < 10; var363++) {
        var363 += 4;
    }

    int var221 = 8;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
