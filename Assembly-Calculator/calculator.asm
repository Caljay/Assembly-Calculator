.data

;numbers to be added from C++ input
firstNumber dd ?
secondNumber dd ?

opAdd dd 0
opSub dd 1
opMulti dd 2
opDiv dd 3

.code
start proc

;moves values from C++ into proper memory locations
mov firstNumber, ecx
mov secondNumber, edx

;moves the user input to edx reg
mov edx, r8d

;moves the operations to a better register
mov r8d, opAdd
mov r9d, opSub
mov r10d, opMulti
mov r11d, opDiv
;clears eax reg
xor eax, eax

;following all checks which operation and jumps
;to that operation if is equal
;if not euqal continues on
cmp edx, opAdd
je AddNums

cmp edx, opSub
je SubNums

cmp edx, opMulti
je MultiNum

cmp edx, opDiv
je DivNums

     
jmp Continue

AddNums:
mov eax, firstNumber
add eax, secondNumber

jmp Continue

SubNums:
mov eax, firstNumber
sub eax, secondNumber

jmp Continue

DivNums:
mov eax, firstNumber
mov edx, secondNumber
div eax


jmp Continue

MultiNum:
mov eax, firstNumber
mov edx, secondNumber
mul eax

jmp Continue



Continue:

ret
start endp

end