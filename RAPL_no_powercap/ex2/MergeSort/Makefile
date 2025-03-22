# Define constants
NTIMES = 10

export NTIMES

# Compile the Bubble Sort program with optimization
compile:
        /usr/bin/gcc -O2 mergeSort.c -o mergeSort_run

# Measure the execution time and power consumption using RAPL
measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./mergeSort_run $(shell cat  array.txt)" C mergeSort $(NTIMES)

# Run the compiled Bubble Sort program
run:
        ./mergeSort_run $(shell cat array.txt)

# Measure memory usage
mem:
        { /usr/bin/time -v ./mergeSort_run < array.txt > /dev/null; } 2>&1 | grep "Maximum resident" #| sed "s/[^0-9]\>

# Clean the compiled program
clean:
        rm -f mergeSort_run