.code             ;specifies the start of a code block
multiplicationwl proc   ;defines a function

	mov rcx, 10000000000   ;loop counter, must be stored in ecx register
	mov eax, 1000    ;first value to be multiplied
	mov ebx, 2       ;second value to be multiplied
					 ;MSB are stored in edx
					 ;LSB are stored in eax

	L1:			  ;I believe this colon defines a section of code
				  ;that the loop function will then loop over and 
				  ;decrement the ecx register until the value inside
				  ;the ecx register is 0

		mul ebx   ;multiplies eax by ebx and stores the results in edx:eax
		mov eax, 1000    ;reset the values to avoid an overflow error
	    mov ebx, 2       ;reset the values to avoid an overflow error

	loop L1       ;loops over code L1 and decrements the value in ecx
				  ;by 1 every iteration

	ret           ;returns the value stored in the rax register

multiplicationwl endp   ;end the function
end