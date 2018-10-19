

// integer codes for the default file descriptors - use in "RSI"
#define _STDOUT 1
#define _STDIN  0
#define _STDERR 2

#define _READ 0
#define _WRITE 1

#define _SYSCALL asm("syscall")

// using MAXADDRESSIZE will help to prevent us from using addresses that are LONGER than X bytes long.
// ergo, in 16 bit mode, an instruction with sizeof(instruction) > MAXADDRESSIZE would be 3. (2 would be fine)
// use these to handle the registers - mapped for each of the addressing types I'll need.
// I'll use these to approximate the register names regardless of underlying address architecture.
#ifdef 64BIT
    // need to define a maximum address for a jump in each mode - could define it in terms of bytes.
    //
    #define MAXADDRESSSIZE 8

    // returncode will contain the output of the instruction, and the initializtion for the call.
    // these are all caller-save registers.
    #define CALL asm("rax")
    #define RETURNCODE asm("rax")
    #define ARG1 asm("rdi")  
    #define ARG2 asm("rsi")
    #define ARG3 asm("rdx")
    #define ARG4 asm("rcx")
    #define ARG5 asm("r8")
    #define ARG6 asm("r9")
    
    // next - we'll engage callee-save registers.
    // should be accessible across function calls.
    #define SAV1 asm("rbx")
    #define SAV2 asm("rbp")
    #define SAV3 asm("r12")
    #define SAV4 asm("r13")
    #define SAV5 asm("r14")
    #define SAV6 asm("r15")

    // last- base pointer.
    // points to the base of the current stack frame
    // might be able to do something fun with this by pushing it
    // to a particular call.
    #define BASE asm("rbp")
    
#endif

// 32-bit definitions - might work on more machines.
#ifdef 32BIT

    #define MAXADDRESSSIZE 4

    // returncode will contain the output of the instruction, and the initializtion for the call.
    // these are all caller-save registers.
    #define CALL asm("eax")
    #define RETURNCODE asm("eax")
    #define ARG1 asm("edi")  
    #define ARG2 asm("esi")
    #define ARG3 asm("edx")
    #define ARG4 asm("ecx")
    #define ARG5 asm("r8d")
    #define ARG6 asm("r9d")
    
    // next - we'll engage callee-save registers.
    // should be accessible across function calls.
    #define SAV1 asm("rbx")
    #define SAV2 asm("rbp")
    // I'm not currently doing anything with 10/11 apparently...

    #define SAV3 asm("r12d")
    #define SAV4 asm("r13d")
    #define SAV5 asm("r14d")
    #define SAV6 asm("r15d")

    // last- base pointer.
    // points to the base of the current stack frame
    // might be able to do something fun with this by pushing it
    // to a particular call.
    #define BASE asm("ebp")
#endif

#ifdef 16BIT

    #define MAXADDRESSSIZE 2
    // returncode will contain the output of the instruction, and the initializtion for the call.
    // these are all caller-save registers.
    #define CALL asm("ax")
    #define RETURNCODE asm("ax")
    #define ARG1 asm("di")  
    #define ARG2 asm("si")
    #define ARG3 asm("dx")
    #define ARG4 asm("cx")
    #define ARG5 asm("r8w")
    #define ARG6 asm("r9w")
    
    // next - we'll engage callee-save registers.
    // should be accessible across function calls.
    #define SAV1 asm("bx")
    #define SAV2 asm("bp")
    #define SAV3 asm("r12w")
    #define SAV4 asm("r13w")
    #define SAV5 asm("r14w")
    #define SAV6 asm("r15w")

    // last- base pointer.
    // points to the base of the current stack frame
    // might be able to do something fun with this by pushing it
    // to a particular call.
    #define BASE asm("bp")
#endif

#ifdef 8BIT

    #define MAXADDRESSSIZE 1

    // returncode will contain the output of the instruction, and the initializtion for the call.
    // these are all caller-save registers.
    #define CALL asm("rax")
    #define RETURNCODE asm("rax")
    #define ARG1 asm("rdi")  
    #define ARG2 asm("rsi")
    #define ARG3 asm("rdx")
    #define ARG4 asm("rcx")
    #define ARG5 asm("r8")
    #define ARG6 asm("r9")
    
    // next - we'll engage callee-save registers.
    // should be accessible across function calls.
    #define SAV1 asm("rbx")
    #define SAV2 asm("rbp")
    #define SAV3 asm("r12")
    #define SAV4 asm("r13")
    #define SAV5 asm("r14")
    #define SAV6 asm("r15")

    // last- base pointer.
    // points to the base of the current stack frame
    // might be able to do something fun with this by pushing it
    // to a particular call.
    #define BASE asm("rbp")
#endif

// down here, we'll drop in some other constants/ items I want.

