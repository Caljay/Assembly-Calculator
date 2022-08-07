.data

;numbers to be added from C++ input
firstNumber dd ?
secondNumber dd ?

.code
start proc

;moves values from C++ into proper memory locations
mov firstNumber, ecx
mov secondNumber, edx

;which expression now??
; < 0 ADD
; = 0 Sub


mov edx, r8d

xor eax, eax


cmp edx, 1

jl AddNums
je SubNums

jmp Continue

AddNums:
mov eax, firstNumber
add eax, secondNumber

jmp Continue

SubNums:
mov eax, firstNumber
sub eax, secondNumber

jmp Continue

Continue:





ret
start endp

end