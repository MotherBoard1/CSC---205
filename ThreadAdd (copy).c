#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int grade = 80; //global variable

//Function to be executed by all threads

void *ThreadAdd(void *vargp)
{
int *myID = (int *) vargp; //store the value arg passed to this thread
static int age = 18; //Create a static var to observe its changes
++age; ++grade;

printf("Thread ID: %d, Age: %d, Grade: %d\n", *myID, ++age, ++grade);

}

int main()
{
int i;
pthread_t tid;

//Creating 3 threads

for(i = 0; i < 5; i++)
pthread_create(&tid, NULL, ThreadAdd, (void *)&tid);
pthread_join(tid, NULL);

pthread_exit(NULL);
return 0;
}
