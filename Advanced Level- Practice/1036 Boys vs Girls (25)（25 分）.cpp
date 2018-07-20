#include<cstdio>
struct person {
    char name[15];
    char id[15];
    int score;
}male, female, temp;
void init() {
    male.score = 101;
    female.score = -1;
}
int main() {
    init();
    int n;
    char gender;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s %c %s %d", temp.name, &gender, &temp.id, &temp.score);
        if(gender == 'M' && temp.score < male.score) {
            male = temp;
        } else if(gender == 'F' && temp.score > female.score) {
            female = temp;
        }
    }
    if(female.score == -1) {
        printf("Absent\n");
    } else {
        printf("%s %s\n", female.name, female.id);
    }
    if(male.score == 101) {
        printf("Absent\n");
    } else {
        printf("%s %s\n", male.name, male.id);
    }
    if(female.score == -1 || male.score == 101) {
        printf("NA\n");
    } else {
        printf("%d\n", female.score - male.score);
    }
    return 0;
}
