.PHONY : clean
main:mycp.c
	gcc -o $@ $^
clean:
	rm main
