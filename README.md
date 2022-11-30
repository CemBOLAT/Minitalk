# Mini-talk

write --> send message to another user
<hr>
signal --> simplified software signal facilities
<hr>
--> SIGUSR1 // --> SIGUSR2 USER MACRO
<hr>
sig_t --> struct variable
<hr>
sigemptyset --> manipulate signal sets /int sigemptyset(sigset_t *set)/ sets empty signals
<hr>
sigaddset --> specified signal to the signal set
<hr>
sigaction --> software signal facilities <br>
     
     #include <signal.h>

     struct  sigaction {
             union __sigaction_u __sigaction_u;  /* signal handler */
             sigset_t sa_mask;               /* signal mask to apply */
             int     sa_flags;               /* see signal options below */
     };
<hr>
kill --> terminate or signal a process
