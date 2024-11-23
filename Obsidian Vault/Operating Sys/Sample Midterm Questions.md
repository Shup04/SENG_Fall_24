- **True or False:**
    The operating system acts as both a **resource allocator** and a **control program**.
    - **Answer:** **True.**

- **Fill in the Blank:**
    A software-generated interrupt caused either by an error or a user request is called a **______**.
    - **Answer:** **Trap**

- **Multiple Choice:**
    In a multiprogramming system, the main function of the **job scheduler** is to:
    a) Allocate memory to processes.
    b) Select which jobs are brought into memory for processing.
    c) Schedule processes onto the CPU.
    d) Manage I/O devices.
    - **Answer:** **b) Select which jobs are brought into memory for processing.**

- **Short Answer:**
    What are the **four main components** of a computer system?
    - **Answer:** **Hardware, Operating System, Application Programs, and Users.**

- **True or False:**    
    In the layered approach to operating system design, the bottom layer is the **user interface**.
    - **Answer:** **False.** _(The bottom layer is the hardware.)_

- **Multiple Choice:**
    The process of copying frequently used information into faster storage to improve performance is known as:
    a) Spooling
    b) Caching
    c) Swapping
    d) Paging
    - **Answer:** **b) Caching**

- **Short Answer:**    
    Explain the concept of a **context switch** in process scheduling.
    - **Answer:** A context switch is the process of saving the state of a currently running process so that it can be resumed later, and loading the saved state of another process to start or resume its execution.

- **Multiple Choice:**
    Which of the following is **NOT** an activity of the operating system's process management?
    a) Creating and deleting processes.
    b) Providing mechanisms for process synchronization.
    c) Compiling application programs.
    d) Handling deadlocks.
    - **Answer:** **c) Compiling application programs.**

- **True or False:**    
    In preemptive scheduling, a running process can be interrupted and moved to the ready queue.
    - **Answer:** **True.**

- **Short Answer:**
    What is the main difference between a **program** and a **process**?
    - **Answer:** A program is a passive entity consisting of code and instructions, whereas a process is an active entity representing a program in execution, including its current state.

- **Multiple Choice:**
    Which system call is used in UNIX to create a new process?
    a) `exec()`
    b) `fork()`
    c) `wait()`
    d) `exit()`
    - **Answer:** **b) `fork()`**

- **True or False:**
    The use of threads in a program can improve performance by allowing concurrent execution.
    - **Answer:** **True.**

- **Short Answer:**
    Describe the main advantage of the **many-to-many** multithreading model.
    - **Answer:** It allows many user-level threads to be mapped to many kernel threads, providing greater concurrency and flexibility without overwhelming the kernel with too many threads.

- **Multiple Choice:**
    In **Round Robin** scheduling, the performance of the algorithm is heavily dependent on:
    a) The priority of processes.
    b) The length of the CPU burst.
    c) The size of the time quantum.
    d) The number of I/O devices.
    - **Answer:** **c) The size of the time quantum.**

- **True or False:**
    A **semaphore** is a synchronization tool that can only take values 0 or 1.
    - **Answer:** **False.** _(That's a binary semaphore or mutex; counting semaphores can have values greater than 1.)_

- **Short Answer:**    
    What is the **critical-section problem** and why is it important in process synchronization?
    - **Answer:** The critical-section problem involves ensuring that when one process is executing in its critical section (a segment of code accessing shared resources), no other process is allowed to execute in its critical section. This is important to prevent race conditions and ensure data consistency.

- **Multiple Choice:**    
    Which of the following scheduling algorithms can lead to **starvation** if not properly managed?
    a) First-Come, First-Served (FCFS)
    b) Shortest Job First (SJF)
    c) Round Robin (RR)
    d) Multilevel Queue Scheduling
    - **Answer:** **b) Shortest Job First (SJF)**

- **True or False:**
    In a client-server system, **sockets** are used as endpoints for communication over a network.    
    - **Answer:** **True.**

- **Short Answer:**
    Explain what a **deadlock** is in operating systems.
    - **Answer:** A deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource held by another process in the set, creating a cycle of dependency with no process able to proceed.

- **Multiple Choice:**    
    The **Rate Monotonic Scheduling (RMS)** algorithm assigns priorities based on:
    a) The length of the next CPU burst.
    b) The deadline of the task.
    c) The inverse of the period of the task.
    d) The amount of I/O operations required.
    - **Answer:** **c) The inverse of the period of the task.**

- **True or False:**    
    In **Peterson's solution** for the critical-section problem, the variable `turn` indicates whose turn it is to enter the critical section.
    - **Answer:** **True.**

- **Multiple Choice:**    
    Which of the following statements about **microkernel system structure** is **FALSE**?
    a) It moves as much functionality as possible from the kernel into user space.
    b) It makes the operating system easier to extend.
    c) It typically results in better performance due to fewer system calls.
    d) It enhances system reliability and security.
    - **Answer:** **c) It typically results in better performance due to fewer system calls.**

- **Short Answer:**    
    What is the purpose of the **Process Control Block (PCB)** in operating systems?
    - **Answer:** The PCB stores important information about a process, including its current state, program counter, CPU registers, memory limits, and I/O status information, allowing the operating system to manage and control processes effectively.

- **True or False:**
    In the **many-to-one** multithreading model, multiple user-level threads are mapped to a single kernel thread.
    - **Answer:** **True.**

- **Multiple Choice:**    
    **Protection** in an operating system is:
    a) A mechanism for defending against external attacks.
    b) A way to control access of processes or users to the resources defined by the OS.
    c) The process of making backup copies of data.
    d) The technique of preventing hardware failures.
    - **Answer:** **b) A way to control access of processes or users to the resources defined by the OS.**

- **Short Answer:**
    What is the main disadvantage of using a **monolithic kernel** structure in operating systems?
    - **Answer:** The main disadvantage is that the entire operating system runs in kernel mode, making it large and complex, which can lead to difficulties in maintenance, debugging, and extending the OS.

- **True or False:**    
    In **Round Robin** scheduling, the time quantum should be significantly larger than the context-switch time to minimize overhead.
    - **Answer:** **True.**

- **Multiple Choice:**
    Which of the following is a hardware solution to the critical-section problem?
    a) Mutex locks
    b) Semaphores
    c) Test-and-set instructions
    d) Monitors
    - **Answer:** **c) Test-and-set instructions**

- **Short Answer:**    
    Describe what happens during a **system boot** process.
    - **Answer:** During system boot, the computer hardware runs the bootstrap loader from ROM, which loads the operating system kernel into memory and starts its execution, initializing the system.

- **True or False:**    
    In **message passing** for inter-process communication, processes communicate by sharing a region of memory.
    - **Answer:** **False.** _(That's shared memory; message passing involves sending and receiving messages.)_