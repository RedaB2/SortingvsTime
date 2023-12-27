#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* Program which takes one argument on the command line, a count of how many integers to process,
 * generates the specified number of random integers, sorts them in descending order, and outputs the sorted list.
 *
 * Usage:
 *         ./sorttest2 number_of_integers
 * Example:
 *         ./sorttest2 10
 *
 */

/** Main program
 * @param argc Number of words on the command line
 * @param argv[] Array of character strings, the words from the command line.
 * @return 0 if success, 1 if error (wrong number of arguments)
 */

int main (int argc, const char* argv[]) {

  int func; //What function to use
  int *nums; // space to store numbers entered from the command line.

  int i; // array index 
  int num_nums; // How many numbers actually entered on the command line.

  // Check that there is only one argument
  if (argc < 2) { 
    printf("Must enter exactly two arguments, the number of elements, and the function desired (1) or (2). Exiting.\n");
    return 1; // Indicate failure
  }

  // Get the number of integers to process
  num_nums = atoi(argv[1]);
  func = atoi(argv[2]);

  if (func != 1 && func != 2){
    printf("The second argument must be either (1) or (2), depending on the function desired\n");
    return 1; //Indicate failure.
  }
  
  // Allocate an array big enough to hold the numbers
  nums = (int*) calloc(num_nums, sizeof(int));
  if (nums == NULL) {
    fprintf(stderr, "Unable to allocate enougn memory to hold the numbers.\n");
  }

  // Generate the specified number of random integers
  for (i = 0; i < num_nums; i++) {
    nums[i] = rand(); // store into the array
  }

  // Now sort and print the array, and time how long the sorting took.
  timesort(nums, num_nums, func);

  return 0; // Indicate success!
}