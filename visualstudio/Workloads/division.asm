.code             ;specifies the start of a code block
divisionwl proc   ;defines a function

	mov rcx, 10000000000   ;loop counter, must be stored in ecx register
	mov eax, 2000000000    ;LSB of dividend (numerator)
	mov edx, 0    ;MSB of dividend (numerator)
	mov ebx, 2   ;the divisor (denominator)

	L1:			  ;I believe this colon defines a section of code
				  ;that the loop function will then loop over and 
				  ;decrement the ecx register until the value inside
				  ;the ecx register is 0

		div ebx   ;divides edx:eax/ebx and stores the value in eax and the remainder 
				  ;in edx - gives weird results when the value gives a remainder.
				  ;I'm not quite sure what's causing it.

	loop L1       ;loops over code L1 and decrements the value in ecx
				  ;by 1 every iteration

	ret           ;returns the value stored in the rax register

divisionwl endp   ;end the function
end