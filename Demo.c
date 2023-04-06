#define false 0
#define MAX_SIZE 10
int tab[MAX_SIZE];
int* arr = tab;
static int interpolation(void);
static int interpolation(void) {
    int i, item = 0;
    int found = false;


    for (i = 0; i < 10; i++) {
        arr++;
        if ((found == false) && (*arr > 16)) {
            found = 1;
            item = i;
        }
    }
    *arr = 20;
    return item;
}

int main(void){
	interpolation();
}