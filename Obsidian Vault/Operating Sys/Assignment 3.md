##### 1. Explain the producer-consumer problem and the solution for the problem. (4 points)
The producer consumer problem is when there is a process producing items into a shared buffer, and another process is consuming items from that shared buffer. The problem is when the buffer is empty or full. If the buffer is full the producer will be unable to add to the buffer and if the buffer is empty the consumer wont be able to consume anything.

To solve this I would use semaphores to track the empty slot and full slot count.

##### 2. What is the difference between deadlock prevention and deadlock avoidance? (4 points)
Deadlock prevention is measures you can take to lower the amount of potential deadlocks, while deadlock avoidance is something like bankers algorithm where you use it to completely ensure that no deadlocks can happen.

##### 3. What is one way to ensure that a circular-wait condition does not occur? (4 points)
You could force the processes into a specific order of resource allocation. 

##### 4. What is the difference between starvation and deadlock? Explain. (3 points)
Starvation is when a process waits forever because it keeps getting pushed back in favour of other processes.

##### 5. A system has three resource types A, B, and C, which are shared by three processes. There are 5 units/instances of each resource type. Consider the following scenario, where the column alloc denotes the number of units of each resource type allocated to each process, and the column max denotes the maximum number of instances of each resource that a process can request. (total 10 points) (Show step-by-step process)
$$
\begin{array}{|c|c|c|}
\hline
\textbf{Process} & \textbf{Allocation (A, B, C)} & \textbf{Max (A, B, C)} \\
\hline
P0 & (1, 2, 1) & (1, 2, 3) \\
\hline
P1 & (2, 0, 1) & (2, 1, 2) \\
\hline
P2 & (2, 2, 1) & (4, 3, 2) \\
\hline
\end{array}
$$
##### A. Create the need matrix (2 points)
$$
\begin{array}{|c|c|c|}
\hline
\textbf{Process} & \textbf{Need (A, B, C)} \\
\hline
P0 & (0, 0, 2) \\
\hline
P1 & (0, 1, 1) \\
\hline
P2 & (2, 1, 1) \\
\hline
\end{array}
$$
##### B. What is the safe sequence? (2 Points)
P1 -> P1 -> P2

##### C. How many safe sequences can you find for the given snapshot? (2 Points)
Just 1.

##### D. Can a request from P0 with 0 units of A, 0 units of B and 2 units of C be permitted? Why or why not? (4 points)
Yes it can because the request (0, 0, 2) <= Available (0, 1, 2).

##### 6. Consider the given resource allocation graph and find if there is a possibility for deadlock. Also, identify the set of edges and vertices from the given graph. (6 points)
![[Pasted image 20241121193448.png]]
There is no possibility for a deadlock because there is no dependency loops.
The vertices are the Processes (P0-P3) and the resources (R1-R3). The edges connect the processes to resources and vice versa, they indicate requesting and allocating.

##### 7. What are the necessary conditions for deadlock? (3 points)
- At least one resource needs to be ion non-sharing mode (MutEx).
- A process holding a resource is waiting for other resources that are held by processes waiting for its resource (Hold and Wait).
- Resources must be given up willingly but the process (No Preemption).
- A set of processes each waiting for their neighbours resource (Circular Wait).

##### 8. Assume that there are 5 processes, P0 through P4, and 4 types of resources. At T0 we have the following system state (6 points)

$$

\begin{array}{|c|c|c|c|}
\hline
\textbf{Process} & \textbf{Allocation (A, B, C, D)} & \textbf{Max (A, B, C, D)} & \textbf{Available (A, B, C, D)} \\
\hline
P0 & (0, 1, 0, 3) & (0, 1, 0, 5) & (1, 5, 2, 0) \\
\hline
P1 & (2, 0, 0, 0) & (2, 3, 2, 2) & - \\
\hline
P2 & (3, 0, 3, 4) & (6, 0, 4, 5) & - \\
\hline
P3 & (2, 1, 1, 0) & (4, 2, 1, 0) & - \\
\hline
P4 & (0, 0, 2, 0) & (0, 6, 3, 2) & - \\
\hline
\end{array}
$$
Need Matrix
$$

% Need Matrix
\begin{array}{|c|c|}
\hline
\textbf{Process} & \textbf{Need (A, B, C, D)} \\
\hline
P0 & (0, 0, 0, 2) \\
\hline
P1 & (0, 3, 2, 2) \\
\hline
P2 & (3, 0, 1, 1) \\
\hline
P3 & (2, 1, 0, 0) \\
\hline
P4 & (0, 6, 1, 2) \\
\hline
\end{array}
$$
##### If the system is in a safe state, can the following requests be granted, why or why not?
##### 8a. P1 requests (2,1,1,0)
Cant be granted because the 2 in request is greater than the 0 needed in P0.
##### 8b. P1 requests (0,2,1,0)
Cant be granted because None of the processes pass.
