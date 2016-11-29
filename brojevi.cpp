#include <cstdio>

void print1(int);
void print3(int);
void print7(int);

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x == 1) print1(y);
    if(x == 3) print3(y);
    if(x == 7) print7(y);
    return 0;
}
void print1(int y){
    for(int i = 0; i<y; i++){
        printf("   *\n");
    }
}
void print7(int y){
    printf("****\n");
    print1(y-1);
}
void print3(int y){
    print7(y/2);
    print7(y/2);
    printf("****\n");
}