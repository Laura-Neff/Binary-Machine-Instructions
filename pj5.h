/* --------------------------------------------------------------------------
   THIS CODE IS MY OWN WORK, IT WAS WRITTEN WITHOUT CONSULTING A TUTOR 
   OR CODE WRITTEN BY OTHER STUDENTS - LAURA NEFF
   -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------
        Pj5 TODO:

          Write the binary number pattern for the 10 machine instructions
      specified in the project write up below.

        Each machine instruction is 32 bits or 4 bytes
    You can write each byte of the machine instruction in this format:

            0bXXXXXXXX    where X is 0 or 1

    A number starting with 0b is treated as a binary number by the compiler

    To help you obtain the bit patter, I have aling the bit along
    with the meaning of each bit using the acronym below.
        (You need to read the acronym vertically !!!)

    You ONLY need to change the bits under: 

            AMux, ALU, Shif, EnC, CCCC, BBBB, AAAA

    You DO NOT need to change the bits under:

            Cond, MBR, MAR, RD, WR, branch address
        -------------------------------------------------------------------------- */

    // Instruction 0   Copy R8 to R0 (i.e.: mov r0, r8)
    // Instruction 1   Copy MDR to R1
    // Instruction 2   Add R6 and R8 and store result in R2
    // Instruction 3   Add MDR and R9 and store result in R3
    // Instruction 4   Left shift R9 and store result in R4
    // Instruction 5   Right shift (R8+R9) and store result in R0
    // Instruction 6   Left shift (NOT(MDR)) and store the result in R1 (NOT ≡ invert the bits)
    // Instruction 7   Compute R8/2 and store the result in register R2
    // Instruction 8   Compute 2*(R6 + R9) and store the result in R3
    // Instruction 9   Compute 4*R9 and store the result in R4
             

     // -------------------------------------------------------------------------- 
     //    Read    |    ACCAASSM    MRWE  
     //    acronym |    MooLLhhB    ADRn
     //    this    |    unnUUiiR    R  C                    branch
     //    way     V    xdd  ff         CCCC    BBBBAAAA    address   
     // -------------------------------------------------------------------------- 
     /* instr. 0: */  0b00010000, 0b00010000, 0b00001000, 0b00000000,   // DO NOT -- Step 0 is done
     /* instr. 1: */  0b10010000, 0b00010001, 0b00000000, 0b00000000,   // REMOVE -- Step 1 is done
     /* instr. 2: */  0b00000000, 0b00010010, 0b10000110, 0b00000000,   // ANY COMMAS !!! -- Step 2 is done
     /* instr. 3: */  0b10000000, 0b00010011, 0b10010000, 0b00000000,   //Step 3 done
     /* instr. 4: */  0b00010100, 0b00010100, 0b00001001, 0b00000000,   //Step 4 done
     /* instr. 5: */  0b00000010, 0b00010000, 0b10011000, 0b00000000,   //Step 5 is done
     /* instr. 6: */  0b10011100, 0b00010001, 0b00000000, 0b00000000,   //Step 6 is done
     /* instr. 7: */  0b00010010, 0b00010010, 0b00001000, 0b00000000,   //Step 7 is done
     /* instr. 8: */  0b00000100, 0b00010011, 0b10010110, 0b00000000,   //Step 8 is done
     /* instr. 9: */  0b00000100, 0b00010100, 0b10011001, 0b00000000,   //Step 9 is done
                                                                                        


     /* Warning: DO NOT REMOVE ANY , (comma) in the above lines         */
     /*          It will cause a lot of syntax errors if you do !!!     */
     /*                                                                 */
     /* ONLY make changes to the 0 digits AFTER  0b                     */
     /* In fact, you only need to change some 0's into 1's              */
     /* The 0's that you don't need to change, don't need to be updated */

