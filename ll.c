#include <stdio.h>
#include <stdlib.h>

// 벡터 덧셈 함수
void vector_add(double *A, double *B, double *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = A[i] + B[i];
    }
}

// 벡터 뺄셈 함수
void vector_sub(double *A, double *B, double *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = A[i] - B[i];
    }
}

// 벡터 내적 함수
void vector_dot(double *A, double *B, int n)
{
    double dot = 0;
    for (int i = 0; i < n; i++)
    {
        dot += A[i] * B[i];
    }
    printf("두 벡터의 내적은 : %.2lf\n", dot);
}

int main()
{
    int n;
    printf("벡터의 크기를 입력하세요: ");
    scanf("%d", &n);

    // 동적 할당
    double *A = (double *)malloc(n * sizeof(double));
    double *B = (double *)malloc(n * sizeof(double));
    double *add_result = (double *)malloc(n * sizeof(double));
    double *sub_result = (double *)malloc(n * sizeof(double));

    printf("벡터 A의 원소를 입력하세요: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &A[i]);
    }

    printf("벡터 B의 원소를 입력하세요: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &B[i]);
    }

    // 벡터 연산
    vector_add(A, B, add_result, n);
    vector_sub(A, B, sub_result, n);

    printf("A + B = [");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf, ", add_result[i]);
    }
    printf("]\n");

    printf("A - B = [");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf, ", sub_result[i]);
    }
    printf("]\n");

    vector_dot(A, B, n);

    free(A);
    free(B);
    free(add_result);
    free(sub_result);

    return 0;
}