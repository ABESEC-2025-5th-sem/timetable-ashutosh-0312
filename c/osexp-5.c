#include <stdio.h>

int main() {
    int pageTable[20], logicalAddress, pageNumber, offset;
    int pageSize, numPages, frameNumber, physicalAddress;

    printf("Enter the number of pages: ");
    scanf("%d", &numPages);

    printf("Enter the page size (in bytes): ");
    scanf("%d", &pageSize);

    printf("Enter the page table (frame number for each page):\n");
    for (int i = 0; i < numPages; i++) {
        printf("Page %d -> Frame: ", i);
        scanf("%d", &pageTable[i]);
    }

    printf("\nEnter the logical address (0 to %d): ", (numPages * pageSize) - 1);
    scanf("%d", &logicalAddress);

    // Calculate page number and offset
    pageNumber = logicalAddress / pageSize;
    offset = logicalAddress % pageSize;

    // Validate page number
    if (pageNumber >= numPages) {
        printf("Invalid logical address! Page number out of bounds.\n");
        return 1;
    }

    // Get frame number from page table
    frameNumber = pageTable[pageNumber];

    // Calculate physical address
    physicalAddress = frameNumber * pageSize + offset;

    printf("Logical Address: %d\n", logicalAddress);
    printf("Page Number: %d\n", pageNumber);
    printf("Offset: %d\n", offset);
    printf("Frame Number: %d\n", frameNumber);
    printf("Physical Address: %d\n", physicalAddress);

    return 0;
}
