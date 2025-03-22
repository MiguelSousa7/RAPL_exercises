NTIMES=10
FIBONACCI=50

export NTIMES

compile:
        /usr/bin/gcc -O0 fibr.c -o fibr_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./fibr_run $(FIBONACCI)" C fibr $(NTIMES)

run:
        ./fibr_run $(FIBONACCI)

mem:
        { /usr/bin/time -v ./fibr_run $(FIBONACCI) > /dev/null; } 2>&1 | grep "Maximum resident" #| sed "s/[^0-9]\+\([0>

clean: