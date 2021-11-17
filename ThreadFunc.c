#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

/*thread function definition*/
void *ThreadFunc(void* args)
{
while(1)
{
printf("I am a ThreadFunc.\n");
}
}
int main()
{
//creating thread id
pthread_t id;
int ret;

//creating thread

ret = pthread_create(&id, NULL, &ThreadFunc, NULL);

if (ret == 0 )
{
printf("Thread created successfully.\n");
pthread_create(&id, NULL, &ThreadFunc, NULL);

}

else
{
printf("Thread not created.\n");
return 0;
//return from main

}

return 0;



}







