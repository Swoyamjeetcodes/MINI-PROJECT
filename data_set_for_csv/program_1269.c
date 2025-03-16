
#include <stdio.h>


int func438(int var161) {
    if (var161 <= 0) return 1;
    return func438(var161 - 1);
}


int main() {
    int var401 = 0;
    while (var401 < 19) {
        var401 += 2;
        var401++;
    }

    int var503 = 29;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    return 0;
}
