# IC Shell
## Overview
In this project, you will implement a simple shell for Linux. This shell will be called “icsh” or “IC shell”. The functionality of this shell will be similar to other popular Linux shells such as bash, csh, zsh, but with a subset of features. Basically, your icsh should have the following functionality: 
- Interactive and batch mode
- Support built-in some commands
- Allow the user to execute one or more programs from executable files as either background or foreground jobs
- Provide job-control, including a job list and tools for changing the foreground/background status of currently running jobs and job suspension/continuation/termination.
- Allow for input and output redirection to/from files.
There are a number of things that you need to implement in this project. We organize the objectives into milestones below
## Interactive command-line interpreter
Basically, when you start your shell with `icsh` with no argument, your shell should go into a prompt as shown below:
```
$ ./icsh
Starting IC shell
icsh $ <waiting for command>
```
You can design your own prompt. In the examples, here we use `icsh $` as our prompt symbol so you know we're in our shell. Optionally, you could write a welcome message when the shell starts.
### Commands
1. **echo \<text\>** -- the echo command prints a given text (until EOL) back to the console.
```
icsh $ echo hello world
hello world
icsh $
```
2. **!!** -- Double-bang; repeat the last command given to the shell.
```
icsh $ echo hello world
hello world
icsh $ !!
echo hello world
hello world
icsh $
```
Note that the command first prints out the last command first before running it. When there is no last command, !! just gives you back the prompt.
3. **exit \<num\>** -- this command exits the shell with a given exit code.
```
icsh $ exit 1
bye
$
```
