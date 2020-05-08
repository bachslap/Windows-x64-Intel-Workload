# Windows-x64-Intel-Workload
This repository contains all the files necessary to place a thermal load on the laptop. 
The load was created using assembly and successively adding, subtracting, multiplying or dividing.

To run this file, I have included all of the visual studio project files necessary. It would not allow me to add one hidden folder
for some reason though. Either way it was built on Visual Studio 2019. If you download all of the files into a folder then click on
Workloads/Workloads.vcxproj and you should be able to directly run the code.

If not, download the workload.cpp main file, and all 4 of the assembly files addition.asm, subtraction.asm, multiplication.asm, 
and division.asm. Then inside of Visual studio, create a new blank C++ project and include these 5 files. If you cannot include these
files, then create new files within C++ by right clicking on the project -> add -> new C++ file to add the .cpp file. Do the same for
the assembly files but make sure you change .cpp to .asm.

Then you must change the architecture to x64 by clicking the little drop down tab next to the debug drop down item in the top middle of
the screen.

As a final step, you must right click on the project -> build dependencies -> build customizations -> and check the masm box. This
tells visual studio to use the MASM assembler to assemble any .asm files. You have to do this because it tells visual studio that
it will be seeing file types other than just C++.

If you are still having problems, I built this by watching this tutorial https://www.youtube.com/watch?v=rxsBghsrvpI&t=823s. It's a little
long, but it really explains exactly what to do and what is going on.
