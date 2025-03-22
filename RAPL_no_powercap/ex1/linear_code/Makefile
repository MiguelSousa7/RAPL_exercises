NTIMES=10
FIBONACCI=50

export NTIMES

compile:
        /usr/bin/gcc -O0 fibi.c -o fibi_run

measure:
        sudo modprobe msr
        sudo ../../../RAPL/main "./fibi_run $(FIBONACCI)" C fibi $(NTIMES)

run:
        ./fibi_run $(FIBONACCI)

mem:
        { /usr/bin/time -v ./fibi_run $(FIBONACCI) > /dev/null; } 2>&1 | grep "Maximum resident" #| sed "s/[^0-9]\+\([0>

clean:
        rm -f fibi_run