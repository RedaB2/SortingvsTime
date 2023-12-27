Reda Boutayeb
rboutayeb

In order to compile the program: 

- Open the terminal
- Make sure all the files are in the directory you are in, if not access it using cd. 
- Enter "make" in order to execute the makefile
- Enter "make docs" in order to make sure the webpage will work.
- Then, the program should be compiled, you can execute any program just by using the commands indicated.
- If you want to delete all the files, "make clean".

In this file, we have two programs: 

 - sorttest
 - sorttest2

 sorttest: 

 Takes in multiple integers, store them in an array, print the unsorted and sorted array. Then, prints the time values.
 Before sorting, after and time difference in seconds and microseconds. 

 sorttest2: 

 Takes in two integers, the first one is the number of random integers wanted in the array. The second is the sorting 
 function we desire to use indexing in array (sort_descending) or using pointers (alt_sort_descending).
 (1) for sort_descending and (2) for alt_sort_descending


1st Test: 

./sorttest2 100000 1 

Here, we are sorting 100000 integers values using indexing in array. 

Time spent sorting: 22 seconds and 802655 microseconds. 

./sorttest2 100000 2 

Here, we are sorting 100000 integers values using pointers to sort. 

Time spent sorting: 22 seconds and 772372 microseconds.

Here, sorting using pointers is faster by 30283 microseconds. 


2nd Test: 

./sorttest2 50000 1 

Here, we are sorting 50000 integers values using indexing in array. 

Time spent sorting: 6 seconds and 14198 microseconds. 

./sorttest2 50000 2 

Here, we are sorting 50000 integers values using pointers to sort. 

Time spent sorting: 6 seconds and 30456 microseconds.

Here, sorting using array indexing is faster by 16258 microseconds. 

2nd Test: 

./sorttest2 75000 1 

Here, we are sorting 75000 integers values using indexing in array. 

Time spent sorting: 13 seconds and 665775 microseconds. 

./sorttest2 75000 2 

Here, we are sorting 75000 integers values using pointers to sort. 

Time spent sorting: 13 seconds and 605202 microseconds.

Here, sorting using pointers is faster by 60753 microseconds.


The more values the program has to sort, the more efficient the pointer method becomes. 






