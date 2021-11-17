#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void StudentMatric(void *gap)
{

int *myID = (int *) gap;
char str[12]; //
int matric;
printf("Input your name: ");
scanf("%s", str); //
printf("Input Matric Number: ");
scanf("%d", &matric);

printf("Thread ID: %d, Student Name: %s, Matric Number: %d\n", *myID, str, matric);

}

int main()
{

int i;
int f;
printf("How many Students? ");
scanf("%i", &f);
pthread_t tid;

//Creating 3 threads

for(i = 0; i <= f; i++)
pthread_create(&tid, NULL, StudentMatric, (void *)&tid);
pthread_join(tid, NULL);

pthread_exit(NULL);
return 0;
}
