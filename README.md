HelloX project is an open source operating system designed for M2M(or IoT,Internet of Things) application,it includes a compact kernel,some auxillary applications and development environment.
Everyone can contribute to it,and any contribution will be recorded in authors.txt file under the same directory as README file.

Takeing the following steps to run HelloX kernel in Virtual Machines(Such as Virtual PC,Virtual BOX,VMWare Workstation,etc):
1. Download the whole repository and build it with Microsoft Visual C++ 6.0,adaptation will be required if you use other development environment;
2. Use Release Version(Select Build->Batch Build...->Tick on Win32 Release option->Click Rebuild All button),debug version will not work;
3. Master.dll will be generated into Release directory;
4. Copy the Master.dll file into bin directory,overwrite the old one if exist;
5. Run Batch.bat in bin directory,a new virtual floppy image named vfloppy.vfd will appear;
6. Use this vfloppy.vfd to boot virtual machina,it should work if no exception;
7. Type 'help' to get help information under the command line UI of HelloX.

NOTE:PLEASE DO NOT DELETE ANY FILE UNDER BIN DIRECTORY.

Wish you good luck!:-),please contact garryxin@gmail.com or QQ/WeChat:89007638 for assistance.

