# Define constants
NTIMES = 10

export NTIMES

# Compile the Bubble Sort program with optimization
compile:
        /usr/bin/gcc -O2 countingSort.c -o countingSort_run

# Measure the execution time and power consumption using RAPL
measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./countingSort_run $(shell cat  array.txt)" C countingSort $(NTIMES)

# Run the compiled Bubble Sort program
run:
        ./countingSort_run $(shell cat array.txt)

# Measure memory usage
mem:
        { /usr/bin/time -v ./countingSort_run < array.txt > /dev/null; } 2>&1 | grep "Maximum resident" #| sed "s/[^0-9]\>

# Clean the compiled program
clean:
        rm -f countingSort_run