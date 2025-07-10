#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

#define MAX_BUFFER 1000

unsigned char buffer[MAX_BUFFER];
int buffer_index = 0;

void GenerateSensorData() {
    int num_bytes = rand() % 6;
    for (int i = 0; i < num_bytes && buffer_index < MAX_BUFFER; i++) {
        buffer[buffer_index++] = rand() % 256;
    }
}

void CheckAndPrintBuffer() {
    if (buffer_index >= 50) {
        printf("Printing the latest 50 bytes:\n");
        for (int i = buffer_index - 50; i < buffer_index; i++) {
            printf("%02X ", buffer[i]);
        }
        printf("\n");
        buffer_index -= 50;
    }
}

int main() {
    srand(time(0));
    for (int sec = 1; sec <= 30; sec++) {
        GenerateSensorData();
        if (sec % 10 == 0) {
            CheckAndPrintBuffer();
        }
        sleep(1);
    }
    return 0;
}
