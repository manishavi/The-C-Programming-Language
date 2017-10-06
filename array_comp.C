# include <stdio.h>

int main() {
    int m, n;
    int i,j;
    int** arr;
    memallocaton(&arr, m, n);
}

void memallocate(int*** arr,int m, int n)
{
    *arr = (int**)malloc(n*sizeof(int*));
    int *arrvl = malloc(n * m *sizeof(int));
    for(i = 0; i<n; i++){
        (*arr)[i] = arrvl + i * m;
    }
}

void memdeallocate(int*** arr, int n)
{
    for(i = 0; i<n; i++){
        free((*arrvl);
        free(*arr);
    }
}