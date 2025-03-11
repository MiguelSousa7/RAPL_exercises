# Define constants
NTIMES = 10

export NTIMES

# Compile the Bubble Sort program with optimization
compile:
        /usr/bin/gcc -O2 bubbleSort.c -o bubbleSort_run

# Measure the execution time and power consumption using RAPL
measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./bubbleSort_run $(shell cat  array.txt)" C bubbleSort $(NTIMES)

# Run the compiled Bubble Sort program
run:
        ./bubbleSort_run $(shell cat array.txt)

# Measure memory usage
mem:
        { /usr/bin/time -v ./bubbleSort_run < array.txt > /dev/null; } 2>&1 | grep "Maximum resident" #| sed "s/[^0-9]\>

# Clean the compiled program
clean:
        rm -f bubbleSort_run