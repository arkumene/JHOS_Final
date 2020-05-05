/* The goal of this program is to create a multithreaded system.

A consumer will supply a filename, location, and a character to
    the producer. 
    also prints the file contents to stdout

A producer will accept multiple consumer requests and create the following
            
        reader thread: reads a file one line at a time, pass each
            line to character thread. creates buffer.

        character thread: replace each blank character with a client
            supplied character. pass line to toUpper thread.

        toUpper thread: convert all lower case letters to upper case.
            pass to writer thread.

        writer thread: write the line to output file. destroy buffer.
    
    producer will return filename and location to consumer when EOF is reached.
    threads will terminate when EOF is reached
*/

//**********************INCLUDES*****************//
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<string.h>
//***********************************************//


//***************GLOBAL VARIABLES****************//

int BUFF_SIZE = 10;

//***********************************************//


//*************STRUCTS***************************//

//a structure for a character queue
typedef struct charQueue{
    int location;               // this is the lines place in the queue
    char *line[10];             // this is a pointer to the line
    struct charQueue *head;     // this holds the next line in the queue
} queue;


//***********************************************//


//**************FUNCTIONS************************//

//readline
/*
char *parseFile (FILE fp){
char buff[255];

return buff;
}
*/
//producer
void producer(char *filename, char *location, char ch){
//create 4 threads
    pthread_t reader;
//    if (pthread_create(&reader, NULL, parseFile, NULL)){
        
//   }

/*reader thread
while !EOF{
    read a line
    while !EOL{
    read a character
    if (it's blank){replace it with char from argv}
    }
    
}

//create queue

//add to queue

//create threads//

//read file line by line//

//write line to file//

//create message queue//

//create character queue//

*/
}

//consumer
void consumer(char *filename, char *location, char ch){
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp=NULL){
        printf("error opening file");
    }

    char buff[255];
    while(fgets(buff, 255, fp)){
        printf(buff);
        memset(buff, 0, 255);
    }

    producer(filename, location, ch);    //pass to producer
}


//***********************************************//


//******************MAIN*************************//

void main (int argc, char *argv[]){

//debug statements
    printf("Starting debug...\n The arguements are:\n");
    for(int i = 0; i<argc; i++){
        printf("i is %d: compared to argc %d \n", i, argc);
        printf("arg %d, %s\n", i, argv[i]);
    }
///////////////////////////////////
consumer("test.txt", "./", '_');

}

//***********************************************//
