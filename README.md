# Minitalk
> # Summary
> The purpose of this project is to code a small data exchange program using UNIX signals.

>> Mandotary Part external functs.

| Function     | Description                                                                                           |
|--------------|-------------------------------------------------------------------------------------------------------|
| ft_printf    | Implements a custom `printf`-like function, creating formatted output.                                |
| signal       | Used to catch a specific signal and perform a specified action when the signal is received.         |
| sigemptyset  | Clears a signal set, used in signal handling to clear the signal set.                                  |
| sigaddset    | Adds a signal to a signal set, used in signal handling to add one or more signals to the signal set.  |
| sigaction    | Used to define a custom action for a specific signal. Specifies a function to be called when the signal is received. |
| kill         | Used to terminate a specified process or send a specific signal. Often used for interprocess communication. |
| getpid       | Returns the Process ID (PID) of the current process.                                                  |
| malloc       | Used for memory allocation. Allocates dynamic memory of a specified size and returns the starting address. |
| free         | Releases previously allocated dynamic memory. Allows returning allocated memory to the system.       |
| pause        | Temporarily suspends a process and waits until a specified signal is received. Often used for signal waiting. |
| sleep        | Sleeps the process for a specified duration in seconds. The process remains idle for the specified time. |
| usleep       | Sleeps the process for a specified duration in microseconds (milliseconds). Pauses the process for a brief period. |
| exit         | Terminates the process and exits, optionally returning an exit code. Typically used for ending a program. |


```sh
 The client takes two parameters:
◦ The server PID.
◦ The string to send.
```

>> Bonus Part

- The server acknowledges every message received by sending back a signal to the client. 
- Unicode characters support! < I have done >
