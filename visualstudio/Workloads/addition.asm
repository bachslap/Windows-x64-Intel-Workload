.code             ;specifies the start of a code block
additionwl proc   ;defines a function

	mov rcx, 10000000000  ;loop counter, must be stored in ecx register
	mov rax, 0    ;addition variable

	L1:			  ;I believe this colon defines a section of code
				  ;that the loop function will then loop over and 
				  ;decrement the ecx register until the value inside
				  ;the ecx register is 0

		inc rax   ;adds one to the value stored in register rax

	loop L1       ;loops over code L1 and decrements the value in ecx
				  ;by 1 every iteration

	ret           ;returns the value stored in the rax register

additionwl endp   ;end the function
end